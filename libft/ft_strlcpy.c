/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:34:50 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/09 21:23:07 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

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
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
		i = 0;
	}
	return (len_src);
}

// #include<stdio.h>
// #include<string.h>
// int main(void)
// {
//     char src[] = "Hello World";
//     char dst[20];
//     printf("copy = %lu\n", ft_strlcpy(dst, src, 20));
//     //printf("origin = %lu\n", strlcpy(dst, src,5));
//     printf("%s\n", dst);
//     return(0);
// }
