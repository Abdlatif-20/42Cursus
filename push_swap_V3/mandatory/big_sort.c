/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 00:10:43 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/27 01:12:25 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	back1(t_list **stack_a, t_list **stack_b)
{
	int	pos_prev_max;
	int	size;

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
	while (position(*stack_b, get_index_of_max(*stack_b)) > 0
		&& position(*stack_b, get_index_of_max(*stack_b)) < size / 2)
		ft_ra_rb(stack_b, "rb\n");
	while (position(*stack_b, get_index_of_max(*stack_b)) > 0
		&& position(*stack_b, get_index_of_max(*stack_b)) >= size / 2)
		ft_rra_rrb(stack_b, "rrb\n");
	ft_pa_pb(stack_b, stack_a, "pa\n");
	if ((*stack_a)->next && (*stack_a)->index > (*stack_a)->next->index)
		ft_sa_sb(stack_a, "sa\n");
}

void	back2(t_list **stack_a, t_list **stack_b, int size)
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

static void	finaly_sort(t_list **stack_a, t_list **stack_b)
{
	int	instr1;
	int	instr2;
	int	size;
	int	pos_max;
	int	pos_prev_max;

	while (*stack_b)
	{
		pos_max = position(*stack_b, get_index_of_max(*stack_b));
		pos_prev_max = position(*stack_b, get_index_of_prev_max(*stack_b));
		size = ft_lstsize(*stack_b);
		instr1 = num_of_instrection(size, pos_max);
		instr2 = num_of_instrection(size, pos_prev_max);
		if (instr1 > instr2)
			back1(stack_a, stack_b);
		else
			back2(stack_a, stack_b, size);
	}
}

static void	pushs(t_list **stack_a, t_list **stack_b, int chunk)
{
	ft_pa_pb(stack_a, stack_b, "pb\n");
	if ((*stack_a)->index < ft_lstsize(*stack_a) / 2
		&& (*stack_a)->index > chunk)
		ft_rr(stack_a, stack_b, "rr\n");
	else
		ft_ra_rb(stack_b, "rb\n");
}

void	big_sort(t_list **stack_a, t_list **stack_b, int chunk)
{
	int	i;
	int	index;
	int	moy;

	i = -1;
	index = chunk;
	moy = index / 2;
	while (*stack_a)
	{
		while (++i < chunk && *stack_a)
		{
			while (check_position((*stack_a), chunk) < ft_lstsize(*stack_a) / 2
				&& (*stack_a)->index > chunk)
				ft_ra_rb(stack_a, "ra\n");
			while (check_position((*stack_a), chunk) >= ft_lstsize(*stack_a) / 2
				&& (*stack_a)->index > chunk)
				ft_rra_rrb(stack_a, "rra\n");
			if ((*stack_a)->index > chunk - moy)
				pushs(stack_a, stack_b, chunk);
			else
				ft_pa_pb(stack_a, stack_b, "pb\n");
		}
			chunk += index;
	}
	finaly_sort(stack_a, stack_b);
}
