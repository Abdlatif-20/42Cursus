/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:35:48 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/21 20:58:02 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	if (size == SIZE_MAX)
		return (NULL);
	p = malloc(n * size);
	if (!p)
		return (NULL);
	ft_bzero(p, n * size);
	return (p);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char	*p;
	size_t n = 0;

	p = ft_calloc(n, 1);
	for (size_t i = 0; i < n ; i++)
		printf("tab[%zu] = %d\n", i,  p[0]);
}*/
