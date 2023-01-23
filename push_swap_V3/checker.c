/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:12:12 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/23 12:14:15 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include "get_next_line.h"

void statement(t_list **stack_a, t_list **stack_b, char *str)
{
	if (!strcmp(str, "ra\n"))
		ft_ra_rb(stack_a, "");
	else if (!strcmp(str, "rb\n"))
		ft_ra_rb(stack_b, "");
	else if (!strcmp(str, "rra\n"))
		ft_rra_rrb(stack_a, "");
	else if (!strcmp(str, "rrb\n"))
		ft_rra_rrb(stack_b, "");
	else if (!strcmp(str, "sa\n"))
		ft_sa_sb(stack_a, "");
	else if (!strcmp(str, "sb\n"))
		ft_sa_sb(stack_b, "");
	else if (!strcmp(str, "pb\n"))
		ft_pa_pb(stack_a, stack_b, "");
	else if (!strcmp(str, "pa\n"))
		ft_pa_pb(stack_b, stack_a, "");
	else if (!strcmp(str, "ss\n"))
		ft_ss(stack_a, stack_b, "");
	else if (!strcmp(str, "rr\n"))
		ft_rr(stack_a, stack_b, "");
	else if (!strcmp(str, "rrr\n"))
		ft_rrr(stack_a, stack_b, "");
	else
		return (write (1, "Error\n", 6), exit(1));
}

int main(int ac, char **av)
{
	char *str;
	char **tab;
	t_list *head_a;
	t_list *head_b;
	(void)ac;
	head_a = NULL;
	head_b = NULL;
	tab = check_string(av);
	filed_arr(tab, &head_a);
	get_index(head_a);
	while (1)
	{
		str = get_next_line(0);
		if (!str)
			break;
		statement(&head_a, &head_b, str);
		free(str);
	}
	if (check_is_sorted(head_a) && !head_b)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	return (0);
}