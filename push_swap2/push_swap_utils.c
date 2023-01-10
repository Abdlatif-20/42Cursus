/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:13:52 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/10 21:13:59 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	check_string_valid(char **av)
{
	int i;
	int i2;

	i = 1;
	while (av[i])
	{
		i2 = 0;
		while (av[i][i2])
		{
			if (av[i][i2] == '-' || av[i][i2] == '+' || av[i][i2] == ' ')
				i2++;
			else if (!(av[i][i2] >= '0' && av[i][i2] <= '9'))
				return (0);
			i2++;
		}
		i++;
	}
	return (1);
}

int	check_doublicate(t_list *stack_a)
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
				return (0);
			check = check->next;
		}
		nodes = nodes->next;
	}
	return (1);
}

int	check_valid(t_list *stack_a)
{
	while (stack_a != NULL)
	{
		if (stack_a->data > 2147483647 || stack_a->data < -2147483648)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

int	check_is_sorted(t_list *stack_a)
{
	while (stack_a->next != NULL)
	{
		if (stack_a->data > stack_a->next->data)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

// int main(int ac, char **av)
// {
// 	t_list *head_a;
// 	t_list *head_b;
// 	head_a = NULL;
// 	head_b = NULL;
// 	// if (ac == 1 && !check_string_valid(av))
// 	// 	return (0);
// 	filed_arr(av, ac, &head_a);
// 	// if (check_doublicate(head_a) == 0)
// 	// 	return (0);
// 	get_index1(head_a);
// }