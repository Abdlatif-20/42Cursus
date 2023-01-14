/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:42:04 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/12 16:16:40 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

// t_list  *get_min(t_list *head)
// {
// 	t_list  *head_a;
// 	t_list  *min;
	
// 	head_a = head;
// 	min = head;
// 	while (head_a->next)
// 	{
// 		if (min->data > head_a->next->data)
// 			min = head_a->next;
// 		head_a = head_a->next;
// 	}
// 	// printf("%lld", min->data);
// 	return (min);
// }

// void    hard_sort(t_list **stack_a, t_list **stack_b)
// {
// 	t_list	*head_a;
// 	t_list	*head_b;
// 	t_list	*min;
// 	int		size;
// 	head_a = *stack_a;
// 	head_b = *stack_b;
// 	size = ft_lstsize(*stack_a);
// 	while (head_a)
// 	{
// 		min = get_min(head_a);
// 		if (min->place == 0)
// 			ft_pa_pb(&head_a, &head_b);
// 		else if (min->place > size / 2)
// 		{
// 			while (min->place != 0)
// 			{
// 				ft_rra_rrb(&head_a);
// 				min->place++;
// 			}
// 			ft_pa_pb(&head_a, &head_b);
// 		}
// 		else
// 			{
// 				while (min->place != 0)
// 				{
// 					ft_ra_rb(&head_a);
// 					min->place--;
// 				}
// 			ft_pa_pb(&head_a, &head_b);
// 			}
// 		head_a = head_a->next;
// 	}
// }


// int main(int ac, char **av)
// {
// 	int i;
// 	int num;
// 	t_list *head_a;
// 	t_list *head_b;
// 	t_list *head;

// 	head_a = NULL;
// 	head_b = NULL;
// 	i = 0;
// 	if (ac == 1)
// 		return (0);
// 	else if (check_string_valid(av))
// 	{
// 		filed_arr(av, ac, &head_a);
// 		// head = head_a;
// 	    if (!check_doublicate(head_a))
// 	        return (0);
// 	    else if (ac == 4 && !check_is_sorted(head_a))
// 	        ft_sort(&head_a);
// 	//     // ft_ra_rb(&head);
// 	//     // ft_sa_sb(&head);
// 	// }
// 	// // printf("%lld", head_a->data);
// 	else
// 		hard_sort(&head_a, &head_b);
// 	head = head_a;
// 	while (head)
// 	{
// 		printf("%lld\t%d\n", head->data);
// 		head = head->next;
// 	}
// 		// get_min(head);
// return (0);
// }
// }