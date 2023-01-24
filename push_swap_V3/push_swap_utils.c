/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdlatif <abdlatif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:22:49 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/24 02:58:32 by abdlatif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	filed_arr(char **av, t_list **head_a)
{
	t_list	*node;
	int	i;
	i = 0;
	while (av[i])
	{
		node = ft_lstnew(ft_atoi(av[i]));
		ft_lstadd_back(head_a, node);
		i++;
	}
	if (check_valid(*head_a))
		check_doublicate(*head_a);
}

char	**check_string_valid(char *str)
{
	char **tab;
	int	i;
	int	i1;
	int	flage;
	
	tab = ft_split(str, ' ');
	i = -1;
	while (tab[++i])
	{
		i1 = -1;
		flage = 0;
		while (tab[i][++i1])
		{
			if ((tab[i][i1] == '+' || tab[i][i1] == '-') && ++flage)
			{
				if (!(tab[i][i1 + 1] >= '0' && tab[i][i1 + 1] <= '9') || i1 != 0)
					return (ft_putstr_fd("Error\n", 2), exit(1), NULL);	
			}
			else if (!(tab[i][i1] >= '0' && tab[i][i1] <= '9'))
					return (ft_putstr_fd("Error\n", 2), exit(1), NULL);
			if (flage > 1)
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
				return (free(stack_a), ft_putstr_fd("Error\n", 2), exit(1));
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
				return (free(stack_a), ft_putstr_fd("Error\n", 2), exit(1), 0);
		stack_a = stack_a->next;
	}
	return (1);
}

int	check_is_sorted(t_list *stack_a)
{
	if(!stack_a)
		return (0);
	while (stack_a->next != NULL)
	{
		if (stack_a->data > stack_a->next->data)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}
