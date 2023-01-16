/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instriction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:18:38 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/16 15:15:31 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	ft_sa_sb(t_list **stack_a_b, char *str)
{
	t_list	*first;
	t_list	*second;

	if (!stack_a_b || !(*stack_a_b)->next)
		return ;
	first = *stack_a_b;
	second = (*stack_a_b)->next;
	
	first->next = second->next;
	second->next = first;
	*stack_a_b = second;
	ft_putstr_fd(str);
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_sa_sb(stack_a, "sa\n");
	ft_sa_sb(stack_b, "sb\n");
}


void	ft_ra_rb(t_list **stack_a_b, char *str)
{
	t_list	*head;
	t_list	*last;
	t_list	*temp;
	
	if (!stack_a_b || !(*stack_a_b)->next)
		return ;
	head = *stack_a_b;
	last = ft_lstlast(*stack_a_b);
	
	temp = (*stack_a_b)->next;
	last->next = head;
	head->next = NULL;
	(*stack_a_b) = temp;
	ft_putstr_fd(str);
}
void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	ft_ra_rb(stack_a, "ra\n");
	ft_ra_rb(stack_b, "rb\n");
}

void	ft_rra_rrb(t_list **stack_a_b, char *str)
{
	t_list	*head;
	t_list	*last;
	t_list	*temp;
	
	if (!stack_a_b || !(*stack_a_b)->next)
		return ;
	head = *stack_a_b;
	temp = *stack_a_b;
	last = ft_lstlast(*stack_a_b);
	
	while (temp->next->next != NULL)
		temp = temp->next;
	temp->next = NULL;
	last->next = head;
	*stack_a_b = last;
	ft_putstr_fd(str);
}
