/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 21:39:15 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/17 13:38:35 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_max(t_list **head_a)
{
	t_list	*h_a;
	int pos = 0;
	
	h_a = *head_a;
	int hight = ft_lstsize(h_a) - 1;
	while (h_a)
	{
		if (h_a->index == hight)
			return (pos);
		h_a = h_a->next;
		pos++;
	}
	return (pos);
}

void	ft_five(t_list **stack_a, t_list **stack_b)
{
	t_list	*head_a;
	t_list	*head_b;
	int		size;

	head_a = *stack_a;
	head_b = *stack_b;
	size = ft_lstsize(head_a);
	while (ft_lstsize(head_a) != 3 && head_a)
		ft_pa_pb(&head_a, &head_b, "pb\n");
	if (!check_is_sorted(head_a))
		ft_sort(&head_a);
	while (head_b)
		ft_pa_pb(&head_a, &head_b, "pa\n");
	
	// head_a = *stack_a;
	// while (head_a)
	// {
	// 	printf("---->[%lld]\n", head_a->data);
	// 	head_a = head_a->next;
	// }
}

int main(int ac, char **av)
{
	int	i;
	t_list *head_a;
	t_list *head_b;
	t_list *head;
	t_list *head_b1;

	head_a = NULL;
	head_b = NULL;
	i = 0;
	if (ac == 1)
		return (0);
	else if (check_string_valid(av))
		filed_arr(av, ac, &head_a);
	head = head_a;
	head_b1 = head_b;
	get_index(head);
	// ft_five(&head, &head_b1);
	// if(check_is_sorted(head))
	// 	printf("ok\n");
	// while (head_a)
	// {
	// 	printf("[%lld]\n", head_a->data);
	// 	head_a = head_a->next;
	// }
	// head = head_a;
	// printf("--->%d", check_position(head, max));
	return (0);
}