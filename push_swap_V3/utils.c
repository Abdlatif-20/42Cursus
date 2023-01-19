/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:23:03 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/19 18:14:47 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index_of_max(t_list *stack)
{
	t_list *max;
	t_list *tmp;

	max = stack;
	tmp = stack;
	while (tmp->next)
	{
		if (max->index < tmp->next->index)
			max = tmp->next;
		tmp = tmp->next;
	}
	return (max->index);
}

int	get_index_of_prev_max(t_list *stack)
{
	t_list *max;
	t_list *tmp;

	max = stack;
	tmp = stack;
	while (tmp->next)
	{
		if (max->index < tmp->next->index && max->index < get_index_of_max(stack))
			max = tmp->next;
		tmp = tmp->next;
	}
	return (max->index);
}

int	num_of_instrection(int size_of_list, int pos)
{
	int instr;
	
	if (pos > size_of_list / 2)
		instr = (size_of_list - pos) + 1;
	else
		instr = pos;
	return (instr);
}

// int	instrection_of_prev_max(int size_of_list, int pos_of_prev_max)
// {
// 	int instr;
// 	if (pos_of_prev_max > size_of_list / 2)
// 		instr = (size_of_list - pos_of_prev_max) - 1;
// 	else
// 		instr = pos_of_prev_max - 1;
// 	return (instr);
// }

void	new_min(t_list **stack_a, t_list **min)
{
	t_list	*head_a;
	
	head_a = *stack_a;
	while (head_a)
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
