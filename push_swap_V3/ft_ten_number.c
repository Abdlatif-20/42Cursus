/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:33:58 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/24 16:32:26 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_sort_ten(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	max;

	while (ft_lstsize(*stack_a) != 3)
	{
		max = get_index_of_max(*stack_a);
		size = ft_lstsize(*stack_a);
		while (position(*stack_a, max) > 0
			&& position(*stack_a, max) >= size / 2)
			ft_rra_rrb(stack_a, "rra\n");
		while (position(*stack_a, max) > 0
			&& position(*stack_a, max) < size / 2)
			ft_ra_rb(stack_a, "ra\n");
		if (!position(*stack_a, max))
			ft_pa_pb(stack_a, stack_b, "pb\n");
	}
	ft_sort(stack_a);
	while (*stack_b && check_is_sorted(*stack_a))
	{
		ft_pa_pb(stack_b, stack_a, "pa\n");
		if ((*stack_a)->index > (*stack_a)->next->index)
			ft_ra_rb(stack_a, "ra\n");
	}
}
