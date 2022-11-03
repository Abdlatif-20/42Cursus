/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:56:08 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/09 21:04:19 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	ft_memset(str, '\0', n);
}
// #include<stdio.h>
// int main()
// {
//     char ss[] = "Hello World";
//     ft_bzero(ss, 5);
//     printf("%c\n", ss[6]);
// }
