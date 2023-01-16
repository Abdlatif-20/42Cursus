/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:22:22 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/16 03:47:03 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*begg;
	int		index;

	if (!lst)
		return (0);
	begg = lst;
	index = 0;
	while (begg != NULL)
	{
		index++;
		begg = begg->next;
	}
	return (index);
}
