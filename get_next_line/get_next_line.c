/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:23:45 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/12 12:01:44 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strdup(char *s)
{
	char	*str;
	size_t	i;
	size_t	len;

	if (!s)
		return(0);
	len = ft_strlen(s);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (++i < len)
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}

static char	*ft_storage(char *saved_string)
{
	size_t	i;
	size_t	i2;
	char	*temp;

	i = ft_strlen(saved_string);
	i2 = new_strlen(saved_string);
	temp = (char *)malloc((i - i2) + 1);
	if (!temp)
		return (NULL);
	temp = ft_strdup(&saved_string[i2 + 1]);
	return (free(saved_string), temp);
}

static char	*read_line(int fd, char *saved_string)
{
	char	*beffer;
	ssize_t	nbyte;

	nbyte = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	beffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!beffer)
		return (NULL);
	while (nbyte != 0 && ft_strchr(saved_string, '\n'))
	{
		nbyte = read(fd, beffer, BUFFER_SIZE);
		if (nbyte <= 0 && !saved_string)
			return (free(beffer), free(saved_string), NULL);
		beffer[nbyte] = '\0';
		saved_string = ft_strjoin(saved_string, beffer);
	}
	return (free(beffer), saved_string);
}

char	*get_next_line(int fd)
{
	static char	*saved_string;
	char		*line;
	size_t		i;

		saved_string = ft_strdup("");
	saved_string = read_line(fd, saved_string);
	//   printf("-->{%s}", saved_string);
	if (!*saved_string || !saved_string)
		return (NULL);
	i = new_strlen(saved_string) + 1;
	line = ft_substr(saved_string, 0, i);
	// printf("-->(%s)", line);
	saved_string = ft_storage(saved_string);
	//  printf("-->({%s})", saved_string);
	return (line);
}
