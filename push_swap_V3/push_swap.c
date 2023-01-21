/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdlatif <abdlatif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:26:21 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/21 01:36:42 by abdlatif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	filed_arr(char **av, int ac, t_list **head_a)
{
	t_list	*node;
	int	i;
	i = 1;
	while (i < ac)
	{
		node = ft_lstnew(ft_atoi(av[i]));
		ft_lstadd_back(head_a, node);
		i++;
	}	
}

int	main(int ac, char **av)
{
	// int	i;
	int size;
	int chunk;
	t_list *head_a;
	t_list *head_b;
	t_list *head;

	head_a = NULL;
	head_b = NULL;
	// i = 0;
	if (ac < 3)
		return (0);
	if (check_string_valid(av))
	{
		filed_arr(av, ac, &head_a);
		head = head_a;
		// printf("%d", ft_lstsize(head));
		size = ft_lstsize(head_a);
		get_index(head_a);
		if (!check_is_sorted(head))
		{
			if (size == 3)
				ft_sort(&head);
			else if (size == 5)
				ft_five(&head, &head_b);
			else if (size <= 100)
			{
				chunk = ft_lstsize(head) / 5;
				ft_big_sort_100(&head, &head_b, chunk);
			}
			else
			{
				chunk = ft_lstsize(head) / 10;
				ft_big_sort_500(&head, &head_b, chunk);
			}
		}
		// head = head_a;
		// while (head)
		// {
		// 	printf("[%lld] %d\n", head->data, head->index);
		// 	head = head->next;
		// }
		// head = head_a;
		// ft_push(&head, &head_b);
		// printf("%d\n", check_position1(head, 5));
	}
	return (0);
}