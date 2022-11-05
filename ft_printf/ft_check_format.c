/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:52:40 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/05 21:13:38 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_check_format(const char format, va_list ptr)
{
	if (format == 'c')
		ft_printchar(va_arg(ptr, int));
	else if (format == 'd' || format == 'i')
		ft_putnbr_fd(va_arg(ptr, int), 1);
	else if (format == 's')
		ft_putstr_fd(va_arg(ptr, char *), 1);
	// else if (format == 'p')
	// 	ft_print_ptr(va_arg(ptr, char *));
	else if (format == 'x' || format == 'X')
		ft_print_hexa(va_arg(ptr, int), format);
	else if (format == 'u')
		ft_putunsignednbr(va_arg(ptr, unsigned int), 1);
	else if (format == '%')
		ft_putchar_fd('%', 1);
}
