/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 00:52:34 by aben-nei          #+#    #+#             */
/*   Updated: 2022/12/24 01:06:16 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	check_valid(int ac, char **av)
{
	int	i;

	i = 0;
	while (++i < ac - 1)
	{
		if (*av[i] < '0' && *av[i] > '9')
			return (0);
	}
	return (1);
}

int	check_sorting(int ac, int *tab)
{
	int	i;

	i = 0;
	// while (i < ac - 1)
	// {
	// 	printf("tab[%d] = %d\n", i, tab[i]);
	// 	i++;
	// }
	// i = 0;
	while (i < ac - 2)
	{
		if (tab[i] < tab[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}

int	*convert_to_int(int ac, char **string)
{
	int	i;
	int	j;
	int	*tab;

	tab = (int *)malloc(ac - 1);
	if (!tab)
		return (0);
	i = 0;
	j = 1;
	while (i < ac - 1)
	{
		tab[i] = atoi(string[j]);
		i++;
		j++;
	}
	return (tab);
}

int main(int ac, char **av)
{
	int *stack_a;
	int *stack_b;
	// int	i;
	
	stack_a = (int *)malloc(ac - 1);
	if (!stack_a)
		return (0);
	stack_b = (int *)malloc(ac - 1);
	if (!stack_b)
		return (0);
	if (check_valid(ac, av))
	{
		stack_a = convert_to_int(ac, av);
		if (!check_sorting(ac, stack_a))
		{

		}
	}
	printf("---> %d", check_sorting(ac, stack_a));
	// i = 0;
	// while (i < ac - 1)
	// {
	// 	printf("tab[%d] = %d\n", i, stack_a[i]);
	// 	i++;
	// }
	
}