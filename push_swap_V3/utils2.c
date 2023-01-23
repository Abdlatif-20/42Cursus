/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 01:32:32 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/23 01:35:57 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int position(t_list *stack_b, int index)
{
	int pos;

	pos = 0;
	while (stack_b)
	{
		if (stack_b->index == index)
			return (pos);
		stack_b = stack_b->next;
		pos++;
	}
	return (pos);
}

int check_position(t_list *list, int max)
{
	t_list *head;
	int pos;

	pos = 0;
	head = list;
	while (head)
	{
		if (head->index < max)
			return (pos);
		head = head->next;
		pos++;
	}
	return (pos);
}

