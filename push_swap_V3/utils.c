/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:23:03 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/18 03:23:35 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pos_of_prv_max(t_list *stack_b)
{
	int pos;
	int prev_high;
	
	prev_high = ft_lstsize(stack_b) - 2;
	pos = 0;

	while (stack_b)
	{
		if (stack_b->index == prev_high)
			return (pos);
		stack_b = stack_b->next;
		pos++;
	}
	return (pos);
}

int	instrection_of_max(t_list *stack_b)
{
	t_list	*head;
	int pos = pos_of_max(stack_b);
	int inst;

	head = stack_b;
	int size = ft_lstsize(head);
		if (pos > size / 2)
			inst = size - pos;
		else
			inst = pos;
	return (inst);
}

int	instrection_of_prev_max(t_list *stack_b)
{
	t_list	*head;
	int pos = pos_of_prv_max(stack_b);
	int inst;

	head = stack_b;
	int size = ft_lstsize(head);
		if (pos > size / 2)
			inst = size - pos;
		else
			inst = pos;
	return (inst);
}

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
	t_list	*min;
	t_list *tmp;
	int		i;
	int		size;

	i = 0;
	size = ft_lstsize(stack_a);
	min = stack_a;
	tmp = stack_a;
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
		tmp = stack_a;
		new_min(&tmp, &min);
	}
}
