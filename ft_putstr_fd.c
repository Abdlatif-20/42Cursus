/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 01:44:14 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/06 15:31:07 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	len_string;

	len_string = 0;
	if (!s)
	{
		write (fd, "(null)", 6);
		return (6);
	}
	while (*s)
		len_string += write (fd, s++, 1);
	return (len_string);
}
