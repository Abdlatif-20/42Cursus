/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 22:22:56 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/26 00:58:02 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort(t_list **stack_a)
{
	while (!check_is_sorted(*stack_a))
	{
		if (get_index_of_max(*stack_a) == (*stack_a)->index)
			ft_ra_rb(stack_a, "ra\n");
		else if (get_index_of_max(*stack_a) == (*stack_a)->next->index)
			ft_rra_rrb(stack_a, "rra\n");
		else if ((*stack_a)->index > (*stack_a)->next->index)
			ft_sa_sb(stack_a, "sa\n");
	}
}
