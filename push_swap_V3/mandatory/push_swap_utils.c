/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:22:49 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/26 00:58:33 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	filed_list(char **av, t_list **head_a)
{
	t_list	*node;
	int		i;

	i = 0;
	while (av[i])
	{
		node = ft_lstnew(ft_atoi(av[i]));
		free(av[i]);
		ft_lstadd_back(head_a, node);
		i++;
	}
	if (check_valid(*head_a))
		check_doublicate(*head_a);
	free(av);
}

char	**check_string_valid(char *str)
{
	char	**tab;
	int		i;
	int		j;

	tab = ft_split(str, ' ');
	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
		{
			if ((tab[i][j] == '+' || tab[i][j] == '-'))
			{
				if (!(tab[i][j + 1] >= '0' && tab[i][j + 1] <= '9') || j != 0)
					return (ft_putstr_fd("\033[0;33mError\n", 2), exit(1), NULL);
			}
			else if (!(tab[i][j] >= '0' && tab[i][j] <= '9'))
				return (ft_putstr_fd("Error\n", 2), exit(1), NULL);
		}
	}
	return (tab);
}

void	check_doublicate(t_list *stack_a)
{
	t_list	*nodes;
	t_list	*check;

	nodes = stack_a;
	check = stack_a;
	while (nodes != NULL)
	{
		check = nodes->next;
		while (check != NULL)
		{
			if (nodes->data == check->data)
				return (ft_putstr_fd("\033[0;33mError\n", 2), exit(1));
			check = check->next;
		}
		nodes = nodes->next;
	}
}

int	check_valid(t_list *stack_a)
{
	while (stack_a != NULL)
	{
		if (stack_a->data > 2147483647 || stack_a->data < -2147483648)
			return (ft_putstr_fd("\033[0;33mError\n", 2), exit(1), 0);
		stack_a = stack_a->next;
	}
	return (1);
}

int	check_is_sorted(t_list *stack_a)
{
	if (!stack_a)
		return (0);
	while (stack_a->next != NULL)
	{
		if (stack_a->data > stack_a->next->data)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
