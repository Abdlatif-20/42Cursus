/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:26:38 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/18 04:59:08 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int check_position(t_list *list, int max)
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

// static int	pos_of_max(t_list *stack_b)
// {
// 	int pos;
// 	int high;
	
// 	high = ft_lstsize(stack_b) - 1;
// 	pos = 0;

// 	while (stack_b)
// 	{
// 		if (stack_b->index == high)
// 			return (pos);
// 		stack_b = stack_b->next;
// 		pos++;
// 	}
// 	return (pos);
// }

// static void	finaly_sort(t_list **stack_a, t_list **stack_b)
// {
// 	int size;
// 	int high;

// 	while (ft_lstsize(*stack_b))
// 	{
// 		size = ft_lstsize(*stack_b);
// 		high = ft_lstsize(*stack_b) - 1;
// 		if(ft_lstsize(*stack_b) && pos_of_max(*stack_b) > size / 2 && (*stack_b)->index != high)
// 		{
// 			while ((*stack_b)->index != high)
// 				ft_rra_rrb(stack_b, "rrb\n");
// 		}
// 		else
// 		{
// 			while ((*stack_b)->index != high)
// 				ft_ra_rb(stack_b, "rb\n");
// 		}
// 		if (ft_lstsize(*stack_b) && (*stack_b)->index == high)
// 			ft_pa_pb(stack_b, stack_a, "pa\n");
// 	}
// }

static void	finaly_sort(t_list **stack_a, t_list **stack_b)
{
	int size;

	while (ft_lstsize(*stack_b))
	{
		size = ft_lstsize(*stack_b);
		if(pos_of_max(*stack_b) > pos_of_prv_max(*stack_b))
		{
			if (pos_of_prv_max(*stack_b) > size / 2)
			{
				while (pos_of_prv_max(*stack_b) != 0)
				{
					ft_rra_rrb(stack_b, "rrb\n");
					// printf("1\n");
				}
			}
			else
				while (pos_of_prv_max(*stack_b) != 0)
					ft_ra_rb(stack_b, "rb\n");
		}
		else if (pos_of_max(*stack_b) < pos_of_prv_max(*stack_b))
		{
			if (pos_of_max(*stack_b) > size / 2)
			{
				while (pos_of_max(*stack_b) != 0)
				{
					ft_rra_rrb(stack_b, "rrb\n");
					// printf("2\n");
				}
			}
			else
				while (pos_of_max(*stack_b) != 0)
					ft_ra_rb(stack_b, "rb\n");
		}
			ft_pa_pb(stack_b, stack_a, "pa\n");
			if (ft_lstsize(*stack_a) > 1 && ft_lstlast(*stack_a)->index < (*stack_a)->index)
				ft_sa_sb(stack_a, "sa\n");
	}
}

void	ft_big_sort1(t_list **stack_a, t_list **stack_b, int max)
{
	int i = -1;
	int a = 27;

	while (*stack_a)
	{
		while (++i < max && *stack_a)
		{
			while (check_position((*stack_a), max) < max / 2 && (*stack_a)->index > max)
				ft_ra_rb(stack_a, "ra\n");
			while (check_position((*stack_a), max) > max / 2 && (*stack_a)->index > max)
				ft_rra_rrb(stack_a, "rra\n");
			if (*stack_a)
			{
				if ((*stack_a)->index > max - a)
				{
					ft_pa_pb(stack_a, stack_b, "pb\n");
					ft_ra_rb(stack_b, "rb\n");
				}
				else
					ft_pa_pb(stack_a, stack_b, "pb\n");
			}
		}
		max += 55;
	}
	finaly_sort(stack_a, stack_b);
}

int main(int ac, char **av)
{
	int	i;
	int max = 55;
	t_list *head_a;
	t_list *head_b;
	t_list *head;

	head_a = NULL;
	head_b = NULL;
	i = 0;
	if (ac == 1)
		return (0);
	else if (check_string_valid(av))
	{
		filed_arr(av, ac, &head_a);
		// head = head_a;
		// if (!check_doublicate(head))
		// 	return (0);
		// else if (ac < 5 && !check_is_sorted(head))
		// {
		// }
		// ft_sa_sb(&head);
	}
	head = head_a;
	get_index(head);
	// ft_sort(&head);
	ft_big_sort1(&head, &head_b, max);
	if(check_is_sorted(head_a))
		printf("ok\n");
	// ft_ra_rb(&head);
	// head = head_a;
	// while (head)
	// {
	// 	printf("[%lld]  = %d\n", head->data, head->index);
	// 	head = head->next;
	// }
	// head = head_a;
	// printf("--->%d", check_position(head, max));
	return (0);
}