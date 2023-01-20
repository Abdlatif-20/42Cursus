/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_handred.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 09:12:35 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/20 13:03:16 by aben-nei         ###   ########.fr       */
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

// static void	back1(t_list **stack_a, t_list **stack_b)
// {
// 	int pos_max;
// 	int pos_prev_max;
// 	int size;
// 	pos_max = position(*stack_b, get_index_of_max(*stack_b));
// 	pos_prev_max = position(*stack_b, get_index_of_max(*stack_b));
// 	size = ft_lstsize(*stack_b); 
// 	if (pos_prev_max > size / 2)
// 		while (position(*stack_b, get_index_of_max(*stack_b)) > 0)
// 			ft_rra_rrb(stack_b, "rrb\n");
// 	else
// 		while (position(*stack_b, get_index_of_max(*stack_b)) > 0)
// 			ft_ra_rb(stack_b, "rb\n");
// 	if (!position(*stack_b, get_index_of_max(*stack_b)))
// 		ft_pa_pb(stack_b, stack_a, "pa\n");
// 	while (position(*stack_b, get_index_of_max(*stack_b)) > 0 && position(*stack_b, get_index_of_max(*stack_b)) < size / 2)
// 		ft_ra_rb(stack_b, "rb\n");
// 	while (position(*stack_b, get_index_of_max(*stack_b)) > 0 && position(*stack_b, get_index_of_max(*stack_b)) > size / 2)
// 		ft_rra_rrb(stack_b, "rrb\n");
// 	ft_pa_pb(stack_b, stack_a, "pa\n");
// 	if ((*stack_a)->next && (*stack_a)->index > (*stack_a)->next->index)
// 		ft_sa_sb(stack_a, "sa\n");
// }

// static void finaly_sort_5(t_list **stack_a, t_list **stack_b)
// {
// 	int	instr1;
// 	int	instr2;
// 	int	size;
// 	while (*stack_b)
// 	{
// 		size = ft_lstsize(*stack_b);
// 		instr1 = num_of_instrection(size, position(*stack_b, get_index_of_max(*stack_b)));
// 		instr2 = num_of_instrection(size, position(*stack_b, get_index_of_prev_max(*stack_b)));
// 		if (instr1 > instr2)
// 			back1(stack_a, stack_b);
// 		else
// 		{
// 			if (position(*stack_b, get_index_of_max(*stack_b)) > size / 2)
// 				while (position(*stack_b, get_index_of_max(*stack_b)) > 0)
// 					ft_rra_rrb(stack_b, "rrb\n");
// 			else
// 				while (position(*stack_b, get_index_of_max(*stack_b)) > 0)
// 					ft_ra_rb(stack_b, "rb\n");
// 			if (!position(*stack_b, get_index_of_max(*stack_b)))
// 				ft_pa_pb(stack_b, stack_a, "pa\n");
// 		}
// 	}
// }

void	ft_push(t_list **stack_a, t_list **stack_b)
{
	int	size = ft_lstsize(*stack_a);
	int	chunks = size / 9;
	int	i = 0;

	while (ft_lstsize(*stack_a))
	{
		while (i < chunks && (*stack_a))
		{
			if ((*stack_a)->index < chunks)
			{
				ft_pa_pb(stack_a, stack_b, "pb\n");
				if ((*stack_b)->index > chunks - 10)
					ft_ra_rb(stack_b, "rb\n");
			}
			else
				ft_ra_rb(stack_a, "ra\n");
			i++;
		}
		chunks +=55;
	}
	// finaly_sort_5(stack_a, stack_b);
}
