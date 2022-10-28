/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:01:04 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/27 13:16:37 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write (fd, s++, 1);
	write (fd, "\n", 1);
}
// #include  <stdio.h>
// int main()
// {
// 	char src[] = "Hello";
// 	char *p = src;
// 	ft_putendl_fd(p, 1);
// 	printf("\n%s", p);
	
// }
