/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_handred.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 09:12:35 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/21 18:34:37 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_position1(t_list *stack_a, int chunks)
{
	int	last;
	int pos;

	last = ft_lstsize(stack_a) - 1;
	pos = 0;
	while (stack_a)
	{
		if (last < chunks)
			return (pos);
		stack_a = stack_a->next;
		pos++;
		last--;
	}
	return (pos);
}

// void	ft_push_two(t_list **stack_a, t_list **stack_b)
// {
// 	int pos;
// 	int pos1;
// 	int size;
	
// 	pos = position(*stack_b, get_index_of_prev_max(*stack_b));
// 	pos1 = position(*stack_b, get_index_of_max(*stack_b));
// 	size = ft_lstsize(*stack_b);
// 	if (pos > size / 2)
// 		while (position(*stack_b, get_index_of_prev_max(*stack_b)))
// 			ft_rra_rrb(stack_b, "rrb\n");
// 	else
// 		while (position(*stack_b, get_index_of_prev_max(*stack_b)))
// 			ft_ra_rb(stack_b, "rb\n");
// 		if (!position(*stack_b, get_index_of_prev_max(*stack_b)))
// 			ft_pa_pb(stack_b, stack_a, "pa\n");
// 	if (pos1 > size / 2)
// 		while (position(*stack_b, get_index_of_max(*stack_b)))
// 			ft_rra_rrb(stack_b, "rrb\n");
// 	else
// 		while (position(*stack_b, get_index_of_max(*stack_b)))
// 			ft_ra_rb(stack_b, "rb\n");
// 		ft_pa_pb(stack_b, stack_a, "pa\n");
// 	if ((*stack_a)->next && (*stack_a)->index > (*stack_a)->next->index)
// 		ft_sa_sb(stack_a, "sa\n");
// }

void	back_to_a(t_list **stack_a, t_list **stack_b)
{
	int inst1;
	int inst2;
	int size;

	while (*stack_b)
	{
		size = ft_lstsize(*stack_b);
		inst1 = num_of_instrection(size, position(*stack_b, get_index_of_max(*stack_b)));
		inst2 = num_of_instrection(size, position(*stack_b, get_index_of_prev_max(*stack_b)));
		if (inst1 > inst2)
		{
			if (position(*stack_b, get_index_of_prev_max(*stack_b)) > size / 2)
				while (position(*stack_b, get_index_of_prev_max(*stack_b)) > 0)
					ft_rra_rrb(stack_b, "rrb\n");
			else
				while (position(*stack_b, get_index_of_prev_max(*stack_b)) > 0)
					ft_ra_rb(stack_b, "rb\n");
			ft_pa_pb(stack_b, stack_a, "pa\n");
			while (position(*stack_b, get_index_of_max(*stack_b)) > 0 && position(*stack_b, get_index_of_max(*stack_b)) < size / 2)
				ft_ra_rb(stack_b, "rb\n");
			while (position(*stack_b, get_index_of_max(*stack_b)) > 0 && position(*stack_b, get_index_of_max(*stack_b)) >= size / 2)
				ft_rra_rrb(stack_b, "rrb\n");
			ft_pa_pb(stack_b, stack_a, "pa\n");
			if ((*stack_a)->next && (*stack_a)->index > (*stack_a)->next->index)
				ft_sa_sb(stack_a, "sa\n");
		}
		else
		{
			if (position(*stack_b, get_index_of_max(*stack_b)) > size / 2)
				while (position(*stack_b, get_index_of_max(*stack_b)))
					ft_rra_rrb(stack_b, "rra\n");
			else
				while (position(*stack_b, get_index_of_max(*stack_b)))
					ft_ra_rb(stack_b, "ra\n");
		}
		if (!position(*stack_b, get_index_of_max(*stack_b)))
			ft_pa_pb(stack_b, stack_a, "pa\n");
	}
}

void ft_push(t_list **stack_a, t_list **stack_b)
{
	int size = ft_lstsize(*stack_a);
	int chunks = size / 5;
	int i;
	int nb, index_chunks = 0;
	int m;
	m = chunks / 2;

	while (ft_lstsize(*stack_a))
	{
		i = 0;
		index_chunks += chunks;
		while (i < chunks && (*stack_a))
		{
			nb = (*stack_a)->index;
			if (nb < index_chunks)
			{
				ft_pa_pb(stack_a, stack_b, "pb\n");
				if (nb >= index_chunks - m)
					ft_ra_rb(stack_b, "rb\n");
				i++;
			}
			else
				ft_ra_rb(stack_a, "ra\n");
		}
	}
	back_to_a(stack_a, stack_b);
}