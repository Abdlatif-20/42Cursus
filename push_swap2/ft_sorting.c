/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:17:27 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/14 02:09:46 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_chunks(t_list **head_a, t_list **head_b, int max, int size)
{
	t_list *head;
	int i = 0;
	
	head = *head_a;
	check_place_of_node(&head);
	while (head && head->index < max && i < size / 5)
	{
		if (head->place == 0)
			ft_pa_pb(&head, head_b);
		else if (head->place < size / 2 && head->place != 0 && head->index < max)
			ft_ra_rb(&head);
		else if (head->place > size / 2 && head->place != 0 && head->index < max)
			ft_rra_rrb(&head);
		head = head->next;
		i++;
	}
}