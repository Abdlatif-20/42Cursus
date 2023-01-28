/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 00:12:12 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/27 08:01:05 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"
#include "get_next_line.h"

void	statement(t_list **stack_a, t_list **stack_b, char *str)
{
	if (!ft_strncmp(str, "ra\n", 3))
		ft_ra_rb(stack_a, "");
	else if (!ft_strncmp(str, "rb\n", 3))
		ft_ra_rb(stack_b, "");
	else if (!ft_strncmp(str, "rra\n", 3))
		ft_rra_rrb(stack_a, "");
	else if (!ft_strncmp(str, "rrb\n", 3))
		ft_rra_rrb(stack_b, "");
	else if (!ft_strncmp(str, "sa\n", 3))
		ft_sa_sb(stack_a, "");
	else if (!ft_strncmp(str, "sb\n", 3))
		ft_sa_sb(stack_b, "");
	else if (!ft_strncmp(str, "pb\n", 3))
		ft_pa_pb(stack_a, stack_b, "");
	else if (!ft_strncmp(str, "pa\n", 3))
		ft_pa_pb(stack_b, stack_a, "");
	else if (!ft_strncmp(str, "ss\n", 3))
		ft_ss(stack_a, stack_b, "");
	else if (!ft_strncmp(str, "rr\n", 3))
		ft_rr(stack_a, stack_b, "");
	else if (!ft_strncmp(str, "rrr\n", 3))
		ft_rrr(stack_a, stack_b, "");
	else
		return (ft_putstr_fd("Error\n", 2), exit(1));
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
