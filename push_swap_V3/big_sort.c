/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 00:10:43 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/21 19:59:16 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_position(t_list *list, int max)
{
	t_list *head;
	int pos;
	
	pos = 0;
	head = list;
	while (head)
	{
		if (head->index < max)
			return (pos);
		head = head->next;
		pos++;
	}
	return (pos);
}

int	position(t_list *stack_b,int index)
{
	int pos;

	pos = 0;

	while (stack_b)
	{
		if (stack_b->index == index)
			return (pos);
		stack_b = stack_b->next;
		pos++;
	}
	return (pos);
}

void	back1(t_list **stack_a, t_list **stack_b)
{
	int pos_prev_max;
	int size;
	
	pos_prev_max = position(*stack_b, get_index_of_prev_max(*stack_b));
	size = ft_lstsize(*stack_b); 
	if (pos_prev_max > size / 2)
		while (position(*stack_b, get_index_of_prev_max(*stack_b)) > 0)
			ft_rra_rrb(stack_b, "rrb\n");
	else
		while (position(*stack_b, get_index_of_prev_max(*stack_b)) > 0)
			ft_ra_rb(stack_b, "rb\n");		
	if (!position(*stack_b, get_index_of_prev_max(*stack_b)))
		ft_pa_pb(stack_b, stack_a, "pa\n");
	while (position(*stack_b, get_index_of_max(*stack_b)) > 0 && position(*stack_b, get_index_of_max(*stack_b)) < size / 2)
		ft_ra_rb(stack_b, "rb\n");
	while (position(*stack_b, get_index_of_max(*stack_b)) > 0 && position(*stack_b, get_index_of_max(*stack_b)) >= size / 2)
		ft_rra_rrb(stack_b, "rrb\n");
	ft_pa_pb(stack_b, stack_a, "pa\n");
	if ((*stack_a)->next && (*stack_a)->index > (*stack_a)->next->index)
		ft_sa_sb(stack_a, "sa\n");
}

static void	finaly_sort_100(t_list **stack_a, t_list **stack_b)
{
	int	instr1;
	int	instr2;
	int	size;
	while (*stack_b)
	{
		size = ft_lstsize(*stack_b);
		instr1 = num_of_instrection(size, position(*stack_b, get_index_of_max(*stack_b)));
		instr2 = num_of_instrection(size, position(*stack_b, get_index_of_prev_max(*stack_b)));
		if (instr1 > instr2)
			back1(stack_a, stack_b);
		else
		{
			if (position(*stack_b, get_index_of_max(*stack_b)) >= size / 2)
				while (position(*stack_b, get_index_of_max(*stack_b)) > 0)
					ft_rra_rrb(stack_b, "rrb\n");
			else
				while (position(*stack_b, get_index_of_max(*stack_b)) > 0)
					ft_ra_rb(stack_b, "rb\n");
			if (!position(*stack_b, get_index_of_max(*stack_b)))
				ft_pa_pb(stack_b, stack_a, "pa\n");
		}
	}
}

void	ft_big_sort_100(t_list **stack_a, t_list **stack_b)
{
	int chunks;
	int i;
	int nb;
	int index_chunks;

	chunks = ft_lstsize(*stack_a) / 5;
	index_chunks = 0;
	while (ft_lstsize(*stack_a))
	{
		i = -1;
		index_chunks += chunks;
		while (++i < chunks && (*stack_a))
		{
			nb = (*stack_a)->index;
			if (nb < index_chunks)
			{
				ft_pa_pb(stack_a, stack_b, "pb\n");
				if (nb >= index_chunks - (chunks / 2))
					ft_ra_rb(stack_b, "rb\n");
			}
			else
				ft_ra_rb(stack_a, "ra\n");
		}
	}
	finaly_sort_100(stack_a, stack_b);
}
