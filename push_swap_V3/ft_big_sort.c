/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:26:38 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/15 01:17:54 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_big_sort(t_list **head_a, t_list **head_b)
// {
// 	t_list	*stack_a;
// 	// int		j = 1,i = 0;
// 	// int		size;

// 	stack_a = *head_a;
// 	get_index(stack_a);
// 	// while (stack_a)
// 	// {
// 	// 	while (i < 8)
// 	// 	{
// 	// 		// j>>i;
// 	// 		size = ft_lstsize(*head_a);
// 	// 		// while (size--)
// 	// 		// {
// 	// 		// 	if ((stack_a->index & j) == 0)
					
// 	// 		// }
				
// 	// 	}
// 	// }
	
// }
void	ft_sorting(t_list **a, t_list **b)
{
	int size = ft_lstsize(*a);
	for (int i = 0; !check_is_sorted(*a); ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			// char c = j + '0';
			int num = (*a)->index;
			if ((num >> i) & 1)
				ft_ra_rb(a);
			else
				ft_pa_pb(a, b);
		}
		while (*b)
			ft_pa_pb(b, a);
	}

}

int main(int ac, char **av)
{
	int i;
	t_list *head_a;
	// t_list *head;
	t_list *head_b;

	head_a = NULL;
	head_b = NULL;
	i = 0;
	if (ac == 1)
		return (0);
	filed_arr(av, ac, &head_a);
	get_index(head_a);
	// printf("%d", head_a->index);
	ft_sorting(&head_a, &head_b);
	// printf("%d\n", ft_lstsize(head_a));
	// ft_pa_pb(&head_a, &head_b);
	// printf("%d\n", ft_lstsize(head_a));
	// ft_pa_pb(&head_b, &head_a);
	// 	while (head_b)
	// {
	// 	printf("-->[%lld]\n", head_b->data);
	// 	head_b = head_b->next;
	// }
	if (check_is_sorted(head_a))
		printf("is sorted");
	// printf("%d", check_is_sorted(head_a));
	return (0);
}