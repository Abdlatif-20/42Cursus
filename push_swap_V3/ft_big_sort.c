/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdlatif <abdlatif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:26:38 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/21 01:35:18 by abdlatif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static int check_position(t_list *list, int max)
// {
// 	t_list *head;
// 	int pos;

// 	pos = 0;
// 	head = list;
// 	while (head)
// 	{
// 		if (head->index < max)
// 			return (pos);
// 		head = head->next;
// 		pos++;
// 	}
// 	return (pos);
// }

static void	back1(t_list **stack_a, t_list **stack_b)
{
	// int pos_max;
	int pos_prev_max;
	int size;
	
	// pos_max = position(*stack_b, get_index_of_max(*stack_b));
	pos_prev_max = position(*stack_b, get_index_of_max(*stack_b));
	size = ft_lstsize(*stack_b); 
	if (pos_prev_max > size / 2)
		while (position(*stack_b, get_index_of_max(*stack_b)) > 0)
			ft_rra_rrb(stack_b, "rrb\n");
	else
		while (position(*stack_b, get_index_of_max(*stack_b)) > 0)
			ft_ra_rb(stack_b, "rb\n");		
	if (!position(*stack_b, get_index_of_max(*stack_b)))
		ft_pa_pb(stack_b, stack_a, "pa\n");
	while (position(*stack_b, get_index_of_max(*stack_b)) > 0 && position(*stack_b, get_index_of_max(*stack_b)) < size / 2)
		ft_ra_rb(stack_b, "rb\n");
	while (position(*stack_b, get_index_of_max(*stack_b)) > 0 && position(*stack_b, get_index_of_max(*stack_b)) >= size / 2)
		ft_rra_rrb(stack_b, "rrb\n");
	ft_pa_pb(stack_b, stack_a, "pa\n");
	if ((*stack_a)->next && (*stack_a)->index > (*stack_a)->next->index)
		ft_sa_sb(stack_a, "sa\n");
}

static void	finaly_sort_500(t_list **stack_a, t_list **stack_b)
{
	int	instr1;
	int	instr2;
	int	size;
	while (*stack_b)
	{
		size = ft_lstsize(*stack_b);
		instr1 = num_of_instrection(size, position(*stack_b, get_index_of_max(*stack_b)));
		instr2 = num_of_instrection(size, position(*stack_b, get_index_of_prev_max(*stack_b)));
		if (instr1 > instr2)
			back1(stack_a, stack_b);
		else
		{
			if (position(*stack_b, get_index_of_max(*stack_b)) >= size / 2)
				while (position(*stack_b, get_index_of_max(*stack_b)) > 0)
					ft_rra_rrb(stack_b, "rrb\n");
			else
				while (position(*stack_b, get_index_of_max(*stack_b)) > 0)
					ft_ra_rb(stack_b, "rb\n");
			if (!position(*stack_b, get_index_of_max(*stack_b)))
				ft_pa_pb(stack_b, stack_a, "pa\n");
		}
	}
}


// void ft_big_sort_500(t_list **stack_a, t_list **stack_b, int chunk)
// {
// 	int i = -1;
// 	int a = chunk / 2;

// 	while (*stack_a)
// 	{
// 		if ((*stack_a) && ft_lstsize(*stack_a) == 250)
// 		{
// 			chunk = ft_lstsize(*stack_a) / 6;
// 			a = chunk / 2;
// 			i = -1;
// 		}
// 		while (++i < chunk && *stack_a)
// 		{
// 			while (check_position((*stack_a), chunk) < ft_lstsize(*stack_a) / 2 && (*stack_a)->index > chunk)
// 				ft_ra_rb(stack_a, "ra\n");
// 			while (check_position((*stack_a), chunk) >= ft_lstsize(*stack_a) / 2 && (*stack_a)->index > chunk)
// 				ft_rra_rrb(stack_a, "rra\n");
// 			if (*stack_a)
// 			{
// 				if ((*stack_a)->index > chunk - a)
// 				{
// 					ft_pa_pb(stack_a, stack_b, "pb\n");
// 					ft_ra_rb(stack_b, "rb\n");
// 				}
// 				else
// 					ft_pa_pb(stack_a, stack_b, "pb\n");
// 			}
// 		}
// 		if ((*stack_a) && ft_lstsize(*stack_a) > 250)
// 			chunk += 50;
// 		else if((*stack_a))
// 			chunk += 46;
// 	}
// 	finaly_sort_500(stack_a, stack_b);
// }
void	ft_big_sort_500(t_list **stack_a, t_list **stack_b, int chunks)
{
	// int	size = ft_lstsize(*stack_a);
	// int	chunks = size / 9;
	int	i;
	int	nb, index_chunks = 0;
	int	m;
	m = chunks / 2;

	while (ft_lstsize(*stack_a))
	{
		i = 0;
		index_chunks += chunks;
		while (i < chunks && (*stack_a))
		{
			nb = (*stack_a)->index;
			if (nb <= index_chunks)
			{
				ft_pa_pb(stack_a, stack_b, "pb\n");
				if (nb > index_chunks - m)	
					ft_ra_rb(stack_b, "rb\n");
				i++;
			}
			else
				ft_ra_rb(stack_a, "ra\n");
		}
	}
	finaly_sort_500(stack_a, stack_b);
}