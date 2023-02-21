/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 01:44:14 by aben-nei          #+#    #+#             */
/*   Updated: 2023/02/11 09:07:46 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../minitalk.h"
#include"../minitalk_bonus.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write (fd, s++, 1);
}
