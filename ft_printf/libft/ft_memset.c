/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:18:35 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/23 18:55:43 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)str;
	i = 0;
	while (i < n)
		src[i++] = (unsigned char)c;
	return (src);
}
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    char str[50];

//    strcpy(str,"This is string.h library function");
//    printf("%s\n", str);
//    ft_memset(str,'$',7);
//     printf("%s\n", str);
// }
