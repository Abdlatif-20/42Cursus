/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:18:35 by aben-nei          #+#    #+#             */
/*   Updated: 2023/02/11 09:07:37 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"
#include"../minitalk_bonus.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)str;
	i = 0;
	while (i < n)
		src[i++] = (unsigned char)c;
	return (src);
}
