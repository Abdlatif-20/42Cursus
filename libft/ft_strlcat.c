/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:23:54 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/28 00:33:45 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

//  #include<string.h>
//  #include<stdio.h>
//  int main()
//  {
//      char dest[8] = "B000000";
//      char src[] = "AAAAAAAA";
// 	 //char b[0xF] = "nyan !";
// 	 size_t len = strlcat(dest, src, 5);

// 	// printf("%zu\n", len);
//     printf("dst = %s\n", dest);
//  }
