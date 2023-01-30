/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 21:39:15 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/26 00:58:07 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **stack_a, t_list **stack_b, int index)
{
	while (position(*stack_a, index) > 0
		&& position(*stack_a, index) >= ft_lstsize(*stack_a) / 2)
		ft_rra_rrb(stack_a, "rra\n");
	while (position(*stack_a, index) > 0
		&& position(*stack_a, index) < ft_lstsize(*stack_a) / 2)
		ft_ra_rb(stack_a, "ra\n");
	if (!position(*stack_a, index))
		ft_pa_pb(stack_a, stack_b, "pb\n");
}

void	ft_five(t_list **stack_a, t_list **stack_b)
{
	if (position(*stack_a, 0) >= 0 && *stack_a)
		push(stack_a, stack_b, 0);
	if (position(*stack_a, 1) >= 0 && *stack_a)
		push(stack_a, stack_b, 1);
	if (ft_lstsize(*stack_a) <= 3 && !check_is_sorted(*stack_a) && *stack_a)
		ft_sort(stack_a);
	if ((*stack_b)->index > (*stack_b)->next->index)
		ft_pa_pb(stack_b, stack_a, "pa\n");
	else
	{
		ft_sa_sb(stack_b, "sb\n");
		ft_pa_pb(stack_b, stack_a, "pa\n");
	}
	ft_pa_pb(stack_b, stack_a, "pa\n");
}
