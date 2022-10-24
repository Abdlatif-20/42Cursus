/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:44:54 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/21 00:53:34 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>

int main()
{
	int sr[] = {1,3};
//	printf("befor cherche = %s\n", sr);
	printf("%p\n", memchr(sr, '\200', 10));
	printf("%p\n", ft_memchr(sr, '\200', 10));
	return (0);
}
*/
