/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:17:27 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/14 21:14:29 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_index(t_list *head, int max)
{
	t_list	*head_a;
	int i = 0;

	head_a = head;
	while (head_a)
	{
		if (head_a->index < max)
			return (i);
		i++;
		head_a = head_a->next;
	}
	return (0);
}

void	ft_push_chunks(t_list **head_a, t_list **head_b, int max, int size)
{
	t_list *head;
	int i = 0;
	int place;
	
	head = *head_a;
	// place = check_place_of_node(head_a, head);
	while (head)
	{
		while (i < max)
		{
			if (ft_check_index(head, max) < size / 2)
			{
				ft_ra_rb(head_a);
			}
		}
		
	}
}

void	ft_sort(t_list **stack_a, t_list **stack_b, int ac)
{
	t_list	*head;
	int		max;

	head = *stack_a;
	max = 4;
	if (ac >= 20)
	{
		while (head)
		{
			ft_push_chunks(&head, stack_b, max, ac-1);
			head = head->next;
			max += 5;
		}
	}
}