/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:44:36 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/06 18:02:36 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexa_len(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		len++;
	while (nb != 0)
	{
		len++;
		nb /= 16;
	}
	return (len);
}

static void	ft_convert_hexa(unsigned int nb, const char format)
{
	if (nb >= 16)
	{
		ft_convert_hexa(nb / 16, format);
		ft_convert_hexa(nb % 16, format);
	}
	else
	{
		if (nb <= 9)
			ft_putchar_fd(nb + '0', 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((nb - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((nb - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hexa(unsigned int nb, const char format)
{
	int	len_string;

	len_string = hexa_len(nb);
	if (nb == 0)
		ft_putchar_fd('0', 1);
	else
		ft_convert_hexa(nb, format);
	return (len_string);
}
