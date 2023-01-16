/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 00:10:43 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/16 06:16:30 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_position(t_list *list, int max)
{
	t_list *head;
	int pos;
	
	pos = 0;
	head = list;
	while (head)
	{
		if (head->index < max)
		{
			// printf("data = %lld\n", head->data);
			return (pos);
		}
		head = head->next;
		pos++;
	}
	return (pos);
}

int	pos_of_max(t_list *stack_b)
{
	int pos;
	int high;
	
	high = ft_lstsize(stack_b) - 1;
	pos = 0;

	while (stack_b)
	{
		if (stack_b->index == high)
			return (pos);
		stack_b = stack_b->next;
		pos++;
	}
	return (pos);
}

void	finaly_sort(t_list **stack_a, t_list **stack_b)
{
	int size;
	int high;

	while (ft_lstsize(*stack_b))
	{
		size = ft_lstsize(*stack_b);
		high = ft_lstsize(*stack_b) - 1;
		if(ft_lstsize(*stack_b) && pos_of_max(*stack_b) > size / 2 && (*stack_b)->index != high)
		{
			while ((*stack_b)->index != high)
			{
				ft_rra_rrb(stack_b);
				printf("rrb\n");
			}
		}
		else
		{
			while ((*stack_b)->index != high)
			{
				ft_ra_rb(stack_b);
				printf("rb\n");
			}
		}
		if (ft_lstsize(*stack_b) && (*stack_b)->index == high)
		{
			ft_pa_pb(stack_b, stack_a);
			printf("pa\n");
		}
	}
}

void	ft_big_sort(t_list **stack_a, t_list **stack_b, int max)
{
	int	i = -1;

	while (*stack_a)
	{
		while (++i < max && *stack_a)
		{
			while (check_position((*stack_a), max) < max / 2 && (*stack_a)->index > max)
			{
				ft_ra_rb(stack_a);
				printf("ra\n");
			}
			while (check_position((*stack_a), max) > max / 2 && (*stack_a)->index > max)
			{
				ft_rra_rrb(stack_a);
				printf("rra\n");
			}
			if (*stack_a)
			{
				if((*stack_a)->index > max - 10)
				{
					ft_pa_pb(stack_a, stack_b);
					printf("pb\n");
					ft_ra_rb(stack_b);
					printf("rb\n");
				}
				else
				{
					ft_pa_pb(stack_a, stack_b);
					printf("pb\n");
				}
			}
		}
		max +=20;
	}
	finaly_sort(stack_a, stack_b);
}

int main(int ac, char **av)
{
	int	i;
	int max = 20;
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
		// 	ft_sort(&head);
		// }
		// ft_sa_sb(&head);
	}
	head = head_a;
	get_index(head);
	ft_big_sort(&head, &head_b, max);
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