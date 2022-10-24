/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:30:04 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/22 00:37:58 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (!n)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include<stdio.h>
#include<string.h>

int main()
{
	printf("copy = %d\n", ft_memcmp("Hello World", "Hello world", -1));
	printf("origin = %d\n", memcmp("Hello World", "Hello world", -1));
}*/
