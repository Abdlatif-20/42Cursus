/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 22:22:56 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/20 02:21:33 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_sort1(t_list **stack_a)
{
	while ((*stack_a)->next)
	{
		if (get_index_of_max(*stack_a) == (*stack_a)->next->index)
		{
			if ((*stack_a)->index > ft_lstlast(*stack_a)->index)
			{
				ft_rra_rrb(stack_a, "rra\n");
				break;
			}
			else
			{
				ft_rra_rrb(stack_a, "rra\n");
				ft_sa_sb(stack_a, "sa\n");
				break;
			}
		}
		else
			if ((*stack_a)->index > (*stack_a)->next->index)
			{
				ft_sa_sb(stack_a, "sa\n");
				break;
			}
		*stack_a = (*stack_a)->next;
	}
}

void	ft_sort(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) == 2 && (*stack_a)->index > ft_lstlast(*stack_a)->index)
		ft_sa_sb(stack_a, "sa\n");
	else if (get_index_of_max(*stack_a) == (*stack_a)->index)
	{
		if ((*stack_a)->next->index > ft_lstlast(*stack_a)->index)
		{
			ft_ra_rb(stack_a, "ra\n");
			ft_sa_sb(stack_a, "sa\n");
		}
		else
			ft_ra_rb(stack_a, "ra\n");
	}
	else
		ft_sort1(stack_a);
}
