/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:42:16 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/06 18:03:03 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		i;
	int		len_string;

	va_start(ptr, format);
	i = 0;
	len_string = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len_string += ft_check_format(format[i + 1], ptr);
			i++;
		}
		else
			len_string += ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(ptr);
	return (len_string);
}

// int	main(void)
// {
// 	int	a = ft_printf(" %x %x \n", 0, 0);
// 	int	a1 = printf(" %x %x \n", 0, 0);
// 	printf("\n%d\n", a);
// 	printf("\n%d\n", a1);
// }