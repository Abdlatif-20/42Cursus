/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instriction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:14:20 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/07 23:40:25 by aben-nei         ###   ########.fr       */
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
	// printf("--->%d", first->data);
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
	// printf("--->%d ", temp->data);
	temp->next = NULL;
	last->next = head;
	*stack_a_b = last;
}