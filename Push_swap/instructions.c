/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 00:52:52 by aben-nei          #+#    #+#             */
/*   Updated: 2022/12/26 15:24:03 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa_pb(stack *stack_a, stack *stack_b, char *str)
{
	int	i;
	int	size;

	size = stack_a->size - 1;
	stack_a->lenght -= 1;
	stack_b->lenght += 1;
	i = 0;
	while (i < stack_b->lenght)
	{
		stack_b->tab[i] = stack_a->tab[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		stack_a->tab[i] = stack_a->tab[i + 1];
		i++;
	}
}

void	ft_sa_sb(stack *stack_a, char *str)
{
	int tmp;
	
	tmp = stack_a->tab[0];
	stack_a->tab[0] = stack_a->tab[1];
	stack_a->tab[1] = tmp;
	if (!strcmp("sa", str))
		printf("sa\n");
	else if (!strcmp("sb", str))
		printf("sb\n");
}

void	ft_ra_rb(stack *stack_a, char *str)
{
	int tmp;
	int *tab;
	int	i;
	int size;

	size = stack_a->lenght;
	tmp = stack_a->tab[0];
	tab = malloc(size * sizeof(int));
	if (!tab)
		return ;
	i = 0;
	while (i < size - 1)
	{
		tab[i] = stack_a->tab[i + 1];
		i++;
	}
	tab[i] = tmp;
	stack_a->tab = tab;
	free(tab);
	if (!strcmp("ra", str))
		printf("ra\n");
	else if (!strcmp("rb", str))
		printf("rb\n");
}

void	ft_rra_rrb(stack *stack_a, char *str)
{
	int tmp;
	int *tab;
	int	i;
	int size;

	size = stack_a->lenght;
	tmp = stack_a->tab[size - 1];
	tab = malloc(size * sizeof(int));
	if (!tab)
		return ;
	i = 0;
	while (i < size)
	{
		tab[i + 1] = stack_a->tab[i];
		i++;
	}
	tab[0] = tmp;
	stack_a->tab = tab;
	free(tab);
	if (!strcmp("rra", str))
		printf("rra\n");
	else if (!strcmp("rrb", str))
		printf("rrb\n");
}

void	filed_arr(stack *stack_a, stack *stack_b, char **av)
{
	int	i;

	stack_a->tab = (int *)malloc(stack_a->size * sizeof(int));
	if (!stack_a->tab)
		return ;
	stack_b->tab = malloc(stack_b->size * sizeof(int));
	if (!stack_b->tab)
		return;
	i = 0;
	while (i < stack_a->lenght)
	{
		stack_a->tab[i] = atoi(av[i + 1]);
		i++;
	}
}

int main(int ac, char **av)
{
	stack	stack_a;
	stack	stack_b;
	int	i;

	stack_a.lenght = ac - 1;
	stack_a.size = ac - 1;
	stack_b.lenght = 0;
	stack_b.size = ac - 1;
	if (ac > 3)
		filed_arr(&stack_a, &stack_b, av);
	i = 0;
	while (i < stack_a.lenght)
	{
		printf("tab[%d] = %d\n", i, stack_a.tab[i]);
		i++;
	}
	ft_sa_sb(&stack_a, "sa");
	//ft_pa_pb(&stack_a, &stack_b, "pb");
	printf("\n----------------------\n");
	i = 0;
	while (i < stack_a.lenght)
	{
		printf("tab[%d] = %d\n", i, stack_a.tab[i]);
		i++;
	}
}