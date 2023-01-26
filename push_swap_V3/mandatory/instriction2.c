/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instriction2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:18:45 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/26 00:58:29 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa_pb(t_list **stack_a, t_list **stack_b, char *str)
{
	t_list	*head_a;
	t_list	*head_b;

	if (!(*stack_a))
		return ;
	if (!*stack_b)
	{	
		head_a = (*stack_a)->next;
		head_b = *stack_a;
		*stack_b = head_b;
		(*stack_b)->next = NULL;
		*stack_a = head_a;
	}
	else
	{
		head_a = (*stack_a)->next;
		ft_lstadd_front(stack_b, *stack_a);
		(*stack_a) = head_a;
	}
	ft_putstr_fd(str, 1);
}

void	ft_rrr(t_list **stack_a, t_list **stack_b, char *str)
{
	ft_rra_rrb(stack_a, "");
	ft_rra_rrb(stack_b, "");
	ft_putstr_fd(str, 1);
}
