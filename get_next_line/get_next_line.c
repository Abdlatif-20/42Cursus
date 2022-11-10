/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 02:14:11 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/10 20:50:59 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	*split_line(char *saved_string)
{
	char	*temp;
	size_t	i;
	size_t	j;
	int		i1;

	i = ft_strlen(saved_string);
	j = ft_strlen1(saved_string);
	temp = (char *)malloc((i - j) + 2);
	if (!temp)
		return (NULL);
	i1 = 0;
	while (saved_string[i1] && saved_string[i1] != '\n')
	{
		temp[i1] = saved_string[i1];
		i1++;
	}
	if (saved_string[i1] == '\n')
		temp[i1] = '\n';
	temp[i1 + 1] = '\0';
	return (temp);
}

char	*get_line(int fd, char *beff, char *saved_string)
{
	ssize_t	nbyte;

	nbyte = 1;
	saved_string = malloc(sizeof(char));
	saved_string[0] = '\0';
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (nbyte != 0 && ft_strchr(saved_string, '\n'))
	{
		nbyte = read(fd, beff, BUFFER_SIZE);
		if (nbyte == -1)
		{
			free(beff);
			free(saved_string);
			return (NULL);
		}
		if (nbyte == 0)
			return (NULL);
		beff[nbyte] = '\0';
		saved_string = ft_strjoin(saved_string, beff);
	}
	return (free(beff), saved_string);
}

char	*save_the_rest(char *saved_string)
{
	size_t	i;
	size_t	j;
	int		i1;
	char	*temp;

	i = ft_strlen(saved_string);
	j = ft_strlen1(saved_string);
	i1 = 0;
	temp = (char *)malloc((i - j));
	if (!temp)
		return (NULL);
	while (saved_string[j + 1])
	{
		temp[i1] = saved_string[j + 1];
		j++;
		i1++;
	}
	temp[i1] = '\0';
	return (free(saved_string), temp);
}

char	*get_next_line(int fd)
{
	char		*beff;
	char		*line;
	static char	*saved_string;

	beff = (char *)malloc(BUFFER_SIZE + 1);
	if (!beff)
		return (NULL);
	saved_string = get_line(fd, beff, saved_string);
	printf ("(%s)", saved_string);
	if (!saved_string)
		return (free(beff), NULL);
	line = split_line(saved_string);
	printf("-->(%s)", saved_string);
	saved_string = save_the_rest(saved_string);
	printf("-->{%s}", saved_string);
	return (line);
}

int	main(void)
{
	int		fd;
	// char	*str;

	fd = open("file.txt", O_RDWR, 0777);
	printf("-- >%s", get_next_line(fd));
	// printf("-- >%s", get_next_line(fd));
	// printf("-- >%s", get_next_line(fd));
	// printf("-- >%s", get_next_line(fd));
	// printf("-- >%s", get_next_line(fd));
}
