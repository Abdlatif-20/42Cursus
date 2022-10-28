/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:11:21 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/27 23:51:44 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*s;

	s = (char *)src;
	dst = (char *)dest;
	i = 0;
	if (dst == s)
		return (dst);
	if (dst < s)
		ft_memcpy(dst, s, n);
	else
		while (n--)
			dst[n] = s[n];
	return (dest);
}

//  #include<stdio.h>
//  #include<string.h>
//  int main()
//  {
//      char src[] = "hello";
// 	 char *dest = NULL;
//      printf("%s\n", memmove(dest, src, 7));
//     //printf("\n%s\n", ft_memcpy(dst, 0, 7));
//  }