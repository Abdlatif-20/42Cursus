/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:42:16 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/05 21:06:47 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		i;

	va_start(ptr, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_check_format(format[i + 1], ptr);
			i++;
		}
		else
			ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(ptr);
	return (0);
}

// int main()
// {
// 	// int j = ft_printf("|zzzzzz%d%d|", 1, 5);
// 	// ft_printf("\n%d\n", j);
// 	// int k = printf("|zzzzzz%d%d|", 1, 5);
// 	// printf("\n%d", k);
// 	// ft_printf("%x", "h");
// 	ft_printf("test = %X\n", 25455);
// 	printf("test = %X\n", 25455);
// 	//  ft_printf("\n%d\n", j);
// 	// int k = printf("abdo = %x\n", 255);
// 	//  printf("\n%d\n", k);
// }