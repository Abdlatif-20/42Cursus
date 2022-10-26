/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:18:35 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/26 16:10:05 by aben-nei         ###   ########.fr       */
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
#include<stdio.h>
#include<string.h>
int main()
{
	int a = 300;
	int	b = 311;
	ft_memset(&a, b, 1);
	
}

