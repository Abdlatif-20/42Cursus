/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:40:48 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/13 21:04:00 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*read_line(int fd, char *string)
{
	char	*beffer;
	ssize_t	nbyte;

	beffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!beffer)
		return (NULL);
	while (!ft_strchr(string, '\n'))
	{
		nbyte = read(fd, beffer, BUFFER_SIZE);
		if (nbyte < 0)
			return (free(beffer), free(string), NULL);
		beffer[nbyte] = '\0';
		string = ft_strjoin(string, beffer);
		if (!string)
			return (free(beffer), NULL);
		else if (nbyte == 0 && string[0] == '\0')
			return (free(beffer), free(string), NULL);
		else if (nbyte == 0)
			return (free(beffer), string);
	}
	return (free(beffer), string);
}

char	*get_next_line(int fd)
{
	static char	*string[OPEN_MAX];
	char		*line;
	char		*tmp;
	size_t		i1;
	size_t		i2;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	string[fd] = read_line(fd, string[fd]);
	i1 = ft_strlen(string[fd], '\0');
	i2 = ft_strlen(string[fd], '\n');
	tmp = string[fd];
	line = ft_substr(string[fd], 0, i2 + 1);
	string[fd] = ft_substr(string[fd], i2 + 1, (i1 - i2));
	free(tmp);
	return (line);
}
