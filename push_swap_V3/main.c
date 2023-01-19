/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:22:42 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/19 17:18:37 by aben-nei         ###   ########.fr       */
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

// int main(int ac, char **av)
// {
// 	int	i;
// 	int size;
// 	int max;
// 	t_list *head_a;
// 	t_list *head_b;
// 	t_list *head;
// 	head_a = NULL;
// 	head_b = NULL;
// 	i = 0;
// 	if (ac == 1)
// 		return (0);
// 	if (check_string_valid(av))
// 	{
// 		filed_arr(av, ac, &head_a);
// 		head = head_a;
// 		size = ft_lstsize(head);
// 		get_index(head);
// 		if (size <= 100)
// 		{
// 			max = 20;
// 			ft_big_sort_100(&head, &head_b, max);
// 		}
// 		else
// 		{
// 			max = 55;
// 			ft_big_sort_500(&head, &head_b, max);
// 		}
// 	}
	// if(check_is_sorted(head_a))
	// 	printf("ok\n");
	// ft_ra_rb(&head);
	// printf("%d\n", position(head, ft_lstsize(head) - 2));
	// head = head_a;
	// while (head)
	// {
	// 	printf("[%lld]  = %d\n", head->data, head->index);
	// 	head = head->next;
	// }
	// head = head_a;
	// printf("--->%d", check_position(head, max));
// 	return (0);
// }