/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 21:39:15 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/26 00:58:07 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **stack_a, t_list **stack_b, int index)
{
	while (position(*stack_a, index) > 0
		&& position(*stack_a, index) >= ft_lstsize(*stack_a) / 2)
		ft_rra_rrb(stack_a, "rra\n");
	while (position(*stack_a, index) > 0
		&& position(*stack_a, index) < ft_lstsize(*stack_a) / 2)
		ft_ra_rb(stack_a, "ra\n");
	if (!position(*stack_a, index))
		ft_pa_pb(stack_a, stack_b, "pb\n");
}

void	ft_five(t_list **stack_a, t_list **stack_b)
{
	if (position(*stack_a, 0) >= 0 && *stack_a)
		push(stack_a, stack_b, 0 && *stack_a);
	if (position(*stack_a, 1) >= 0 && *stack_a)
		push(stack_a, stack_b, 1 && *stack_a);
	if (ft_lstsize(*stack_a) <= 3 && !check_is_sorted(*stack_a) && *stack_a)
		ft_sort(stack_a);
	if ((*stack_b)->index > (*stack_b)->next->index)
		ft_pa_pb(stack_a, stack_b, "pa\n");
	else
	{
		ft_sa_sb(stack_b, "sb\n");
		ft_pa_pb(stack_a, stack_b, "pa\n");
	}
	ft_pa_pb(stack_a, stack_b, "pa\n");
}

// int main(int ac, char **av)
// {
// 	int	i;
// 	t_list *head_a;
// 	t_list *head_b;
// 	t_list *head;
// 	t_list *head_b1;

// 	head_a = NULL;
// 	head_b = NULL;
// 	i = 0;
// 	if (ac == 1)
// 		return (0);
// 	else if (check_string_valid(av))
// 		filed_arr(av, ac, &head_a);
// 	head = head_a;
// 	head_b1 = head_b;
// 	get_index(head);
// 	ft_five(&head, &head_b1);
// 	// if(check_is_sorted(head))
// 	// 	printf("ok\n");
// 	// while (head_a)
// 	// {
// 	// 	printf("[%lld]\n", head_a->data);
// 	// 	head_a = head_a->next;
// 	// }
// 	// head = head_a;
// 	// printf("--->%d", check_position(head, max));
// 	return (0);
// }