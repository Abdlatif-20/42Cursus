/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 08:21:13 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/06 17:56:09 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

/*--------------- Prototype Function ----------------*/

int	ft_printf(const char *format, ...);
int	ft_putnbr_fd(int n, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putchar_fd(char c, int fd);
int	ft_putunsignednbr(unsigned int nbr, int fd);
int	ft_check_format(const char format, va_list ptr);
int	ft_print_hexa(unsigned int nb, const char format);
int	ft_printchar(int c);
int	ft_print_ptr(unsigned long long nb);

#endif