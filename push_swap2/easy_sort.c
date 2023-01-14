/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 22:22:56 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/11 11:15:55 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_sort(t_list **stack_a)
{
	t_list	*head;

	head = *stack_a;
	while (head->next->next)
	{
		if (head->data < head->next->data)
		{
			if (head->data < head->next->next->data)
			{
				ft_sa_sb(&head);
				ft_ra_rb(&head);
				break;
			}
				ft_rra_rrb(&head);
				break;
		}
		else if(head->data > head->next->data)
		{
			if (head->next->data > head->next->next->data)
			{
				ft_ra_rb(&head);
				ft_sa_sb(&head);
				break;
			}
			else if (head->data > head->next->next->data)
			{
				ft_ra_rb(&head);
				break;
			}
			ft_sa_sb(&head);
				break;
		}
		head = head->next;
	}
	*stack_a = head;
}

// int	main(int ac, char **av)
// {
// 	t_list	*head_a;
// 	t_list	*head_b;
	
// 	head_a = NULL;
// 	head_b = NULL;
	
// 	if (check_string_valid(av))
// 	{
// 		filed_arr(av, ac, head_a);
// 		if (check_doublicate(head_a))
// 		{
// 			if (!check_is_sorted(head_a))
// 				ft_sort(&head_a);
// 		}
// 	}
// }