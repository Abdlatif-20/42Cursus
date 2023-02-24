/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:56:08 by aben-nei          #+#    #+#             */
/*   Updated: 2023/02/11 09:07:35 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"
#include"../minitalk_bonus.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}