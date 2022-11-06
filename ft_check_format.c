/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:52:40 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/06 17:33:02 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_check_format(const char format, va_list ptr)
{
	int	len_string;

	len_string = 0;
	if (format == 'c')
		len_string += ft_printchar(va_arg(ptr, int));
	else if (format == 'd' || format == 'i')
		len_string += ft_putnbr_fd(va_arg(ptr, int), 1);
	else if (format == 's')
		len_string += ft_putstr_fd(va_arg(ptr, char *), 1);
	else if (format == 'p')
		len_string += ft_print_ptr(va_arg(ptr, unsigned long long));
	else if (format == 'x' || format == 'X')
		len_string += ft_print_hexa(va_arg(ptr, int), format);
	else if (format == 'u')
		len_string += ft_putunsignednbr(va_arg(ptr, unsigned int), 1);
	else if (format == '%')
		len_string += ft_putchar_fd('%', 1);
	else
		len_string += ft_putchar_fd(format, 1);
	return (len_string);
}
