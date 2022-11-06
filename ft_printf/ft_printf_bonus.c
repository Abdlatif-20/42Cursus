/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 22:19:58 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/06 22:30:47 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(const char format)
{
	int	len;

	len = 0;
	if (format == ' ')
	{
		len += ft_putchar_fd(format, 1);
	}
	if (format == '+')
	{
		len += ft_putchar_fd(format, 1);
	}
	if (format == '#')
	{
		len += ft_putchar_fd(format, 1);
	}
	return (len);
}
