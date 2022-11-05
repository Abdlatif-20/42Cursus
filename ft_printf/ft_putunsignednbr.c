/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:43:32 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/05 19:16:20 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libftprintf.h"

void	ft_putunsignednbr(unsigned int nbr, int fd)
{
	if (nbr > 9)
	{
		ft_putunsignednbr((nbr / 10), fd);
		ft_putunsignednbr((nbr % 10), fd);
	}
	else
		ft_putchar_fd((nbr + '0'), fd);
}
