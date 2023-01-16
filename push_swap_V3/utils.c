/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:23:03 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/14 22:23:05 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	new_min(t_list **stack_a, t_list **min)
{
	t_list	*head_a;
	
	head_a = *stack_a;
	while (head_a->next)
	{
		if (head_a->index == -1)
		{
			*min = head_a;
			break;
		}
		head_a = head_a->next;
	}
}

void	get_index(t_list *stack_a)
{
	t_list	*head_a;
	t_list	*min;
	t_list *tmp;
	int		i;
	int		size;

	head_a = stack_a;
	i = 0;
	size = ft_lstsize(stack_a);
	min = head_a;
	tmp = head_a;
	while (size--)
	{
		while (tmp->next)
		{
			while (min->data > tmp->next->data && tmp->next->index == -1)
				min = tmp->next;
			tmp = tmp->next;
		}
		if (min->index == -1)
			min->index = i++;
		tmp = head_a;
		new_min(&tmp, &min);
	}
}
