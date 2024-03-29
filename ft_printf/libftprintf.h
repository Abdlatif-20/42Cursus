/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 08:21:13 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/05 21:09:58 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

/*--------------- Prototype Function ----------------*/

int		ft_printf(const char *,	...);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putunsignednbr(unsigned int nbr, int fd);
void	ft_check_format(const char format, va_list ptr);
void	ft_print_hexa(int nb, const char format);
void	ft_printchar(int c);
void	ft_print_ptr(char *str);

#endif