/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 01:32:32 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/24 14:02:59 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include"get_next_line.h"

int	position(t_list *stack_b, int index)
{
	int	pos;

	pos = 0;
	while (stack_b)
	{
		if (stack_b->index == index)
			return (pos);
		stack_b = stack_b->next;
		pos++;
	}
	return (pos);
}

int	check_position(t_list *list, int max)
{
	t_list	*head;
	int		pos;

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

int	check_is_string_wrong(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}

char	**check_string(char **av)
{
	char	*str;
	int		i;

	str = NULL;
	i = 1;
	while (av[i])
	{
		if (!check_is_string_wrong(av[i]))
			return (ft_putstr_fd("\033[0;31mError\n", 2), exit(1), NULL);
		else
		{
			str = ft_strjoin(str, av[i]);
			str = ft_strjoin(str, " ");
		}
		i++;
	}
	return (check_string_valid(str));
}
