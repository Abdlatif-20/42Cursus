/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:43:32 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/06 17:43:23 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	num_unsigned_len(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	if (nb == 0)
		len++;
	while (nb != 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

int	ft_putunsignednbr(unsigned int nbr, int fd)
{
	int	len_string;

	len_string = num_unsigned_len(nbr);
	if (nbr > 9)
	{
		ft_putunsignednbr((nbr / 10), fd);
		ft_putunsignednbr((nbr % 10), fd);
	}
	else
		ft_putchar_fd((nbr + '0'), fd);
	return (len_string);
}
