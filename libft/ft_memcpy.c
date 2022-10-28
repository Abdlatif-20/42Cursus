/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:20:45 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/27 23:43:35 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dst;
	const char	*str;
	size_t		i;

	dst = (char *)dest;
	str = (const char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	i = -1;
	while (++i < n)
		dst[i] = str[i];
	return (dst);
}

//  #include<stdio.h>
//  #include<string.h>
//  int main()
//  {
//      char *dst = NULL;
// 	 char str[] = "hello bro";
//     //  printf("\n---------------%s\n", memcpy(dst, str, 7));
//     printf("\n%s\n", ft_memcpy(dst, str, 7));
//  }
