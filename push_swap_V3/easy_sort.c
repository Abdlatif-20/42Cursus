/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 22:22:56 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/16 20:08:04 by aben-nei         ###   ########.fr       */
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
				ft_sa_sb(&head, "sa\n");
				ft_ra_rb(&head, "ra\n");
				break;
			}
				ft_rra_rrb(&head, "rra\n");
				break;
		}
		else if(head->data > head->next->data)
		{
			if (head->next->data > head->next->next->data)
			{
				ft_ra_rb(&head, "ra\n");
				ft_sa_sb(&head, "sa\n");
				break;
			}
			else if (head->data > head->next->next->data)
			{
				ft_ra_rb(&head, "ra\n");
				break;
			}
			ft_sa_sb(&head, "sa\n");
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