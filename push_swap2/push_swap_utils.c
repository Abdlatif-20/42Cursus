/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:13:52 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/06 21:55:51 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int check_string_valid(char **av, int size)
{
	int i;
	int i2;
	int *tab;

	tab = (int *)malloc(size * sizeof(int));
	if (!tab)
		return (0);
	i = 0;
	i2 = 1;
	while (i2 <= size && av[i2])
	{
		tab[i] = atoi(av[i2]);
		i++;
		i2++;
	}
	i = 0;
	// while (tab[++i])
	// 	if (!(tab[i] >= 48 && tab[i] <= 57))
	// 		return (0);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (1);
}

int	check_doublicate(t_list *stack_a)
{
	t_list	*nodes;
	t_list	*nodes2;
	
	nodes = stack_a;
	nodes2 = stack_a;
	while (nodes->next != NULL)
	{
		while (nodes2->next->next != NULL)
		{
			if (nodes->data == nodes2->next->data)
				return (0);
			// printf("-->%d<--\n-->%d<--", stack_a->data, stack_a->next->data);
			nodes2->next = nodes2->next->next;
		}
		nodes = nodes->next;
	}
	return (1);
}

// int	check_valid(t_list *stack_a)
// {
// 	while (stack_a->next != NULL)
// 	{
// 		if (stack_a->data > 2147483647 || stack_a->data < -2147483648)
// 			return (0);
// 		stack_a = stack_a->next;
// 	}
// 	return (1);
// }

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

int main(int ac, char **av)
{
	int	i;
	t_list *head_a;
	t_list *head_b;

	head_a = NULL;
	head_b = NULL;
	i = 0;
	if (ac == 1)
		return (0);
	filed_arr(av, ac, &head_a);
	// printf("%d\n", head_a->data);
	// printf("%d", check_doublicate(head_a));
	printf("%d", check_string_valid(av, ac - 1));
}