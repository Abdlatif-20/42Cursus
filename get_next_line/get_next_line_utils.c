/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 02:14:22 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/10 20:51:12 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_src;

	i = 0;
	j = 0;
	len_src = ft_strlen(src);
	if (size != 0)
	{
		while (src[i] && i < size - 1)
			dst[j++] = src[i++];
		dst[j] = '\0';
		i = 0;
	}
	return (len_src);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	if (!dst && !dstsize)
		return (len_src);
	len_dst = ft_strlen(dst);
	if (len_dst >= dstsize)
		return (len_src + dstsize);
	i = 0;
	while (src[i] && i < (dstsize - len_dst - 1))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strlen1(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != '\n')
		len++;
	return (len);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = malloc((len_s1 + len_s2) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len_s1 + 1);
	ft_strlcat(str, s2, (len_s1 + len_s2) + 1);
	return (free (s1), str);
}
