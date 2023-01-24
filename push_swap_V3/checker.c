/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:12:12 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/24 21:00:38 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include "get_next_line.h"

void	statement(t_list **stack_a, t_list **stack_b, char *str)
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
		return (ft_putstr_fd("Error1\n", 2), exit(1));
}

void	do_push_swap(char **av)
{
	char	**tab;
	char	*str;
	t_list	*head_a;
	t_list	*head_b;

	head_a = NULL;
	head_b = NULL;
	tab = check_string(av);
	filed_list(tab, &head_a);
	get_index(head_a);
	while (1)
	{
		str = get_next_line(0);
		if (!str)
			break ;
		statement(&head_a, &head_b, str);
		free(str);
	}
	if (check_is_sorted(head_a) && !head_b)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	ft_lstclear(&head_a);
	ft_lstclear(&head_b);
}

int	main(int ac, char **av)
{
	(void)ac;
	do_push_swap(av);
	return (0);
}
