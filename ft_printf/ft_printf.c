/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:42:16 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/03 22:16:02 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list ptr;
	int count;
	int number;
	int i;
	int j;
	char character;
	char *str;
	va_start(ptr, format);
	
	i = 0;
	j = 0;
	while (format[i])
		{
			if (format[i] == '%' && format[i + 1] == 'd')
			{
				number = va_arg(ptr, int);
				ft_putnbr_fd(number, 1);
				i++;
				j++;
			}
			else if (format[i] == '%' && format[i + 1] == 'p')
			 	va_arg(ptr, &format[i]);
			else if (format[i] == '%' && format[i + 1] == 'c')
			 {
				 character = va_arg(ptr, char );
				 ft_putchar_fd(character, 1);
			 }
			else if (format[i] == '%' && format[i + 1] == 's')
			 {
			 	str = va_arg(ptr, char *);
				ft_putstr_fd(str, 1);
				i++;
				j++;
			 }
			else if (format[i] == '\n')
			 	ft_putchar_fd('\n', 1);
			else
				ft_putchar_fd(format[i], 1);
			i++;
		}
		va_end(ptr);
	return (i - j);
}

int main()
{
	int j = ft_printf("|zzzzzz%d%d|", 1, 5);
	ft_printf("\n%d\n", j);
	int k = printf("|zzzzzz%d%d|", 1, 5);
	printf("\n%d", k);
}