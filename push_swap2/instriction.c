/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instriction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:14:20 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/14 19:39:27 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa_sb(t_list **stack_a_b)
{
	t_list	*first;
	t_list	*second;

	first = *stack_a_b;
	second = (*stack_a_b)->next;
	
	first->next = second->next;
	second->next = first;
	*stack_a_b = second;
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_sa_sb(stack_a);
	ft_sa_sb(stack_b);
}


void	ft_ra_rb(t_list **stack_a_b)
{
	t_list	*head;
	t_list	*last;
	t_list	*temp;
	
	head = *stack_a_b;
	last = ft_lstlast(*stack_a_b);
	
	temp = (*stack_a_b)->next;
	last->next = head;
	head->next = NULL;
	(*stack_a_b) = temp;
}
void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	ft_ra_rb(stack_a);
	ft_ra_rb(stack_b);
}

void	ft_rra_rrb(t_list **stack_a_b)
{
	t_list	*head;
	t_list	*last;
	t_list	*temp;
	
	head = *stack_a_b;
	temp = *stack_a_b;
	last = ft_lstlast(*stack_a_b);
	
	while (temp->next->next != NULL)
		temp = temp->next;
	temp->next = NULL;
	last->next = head;
	*stack_a_b = last;
}
