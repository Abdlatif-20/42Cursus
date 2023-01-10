/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdlatif <abdlatif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 19:57:54 by abdlatif          #+#    #+#             */
/*   Updated: 2022/12/31 15:49:00 by abdlatif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min(stack *stack_a)
{
    int i = 0;
    int indx = 0;
    int min = stack_a->tab[0];
    while (i < stack_a->size)
    {
        if (stack_a->tab[i] < min)
        {
            min = stack_a->tab[i];
			indx = i;
        }
        i++;
    }
    return indx;
}

int	ft_get_index(int *tab, int num, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] == num)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

void	easy_sort(stack *stack_a, stack *stack_b)
{
	int	i;
	int	j;
	int	indx;
	int	size;

	i = 1;
	size = stack_a->size;
	j = size / 2;
	i = 0;
	while (stack_a->lenght > 3)
	{
		indx = find_min(stack_a);
		if (indx > j)
		{
			while (ft_get_index(stack_a->tab, stack_a->tab[indx], stack_a->lenght))
				{
					ft_rra_rrb(stack_a, "rra");
					indx++;
				}
				ft_pa_pb(stack_a, stack_b, "pb");
		}
		else
		{
			while (ft_get_index(stack_a->tab, stack_a->tab[indx], stack_a->lenght) > 0)
			{
				ft_ra_rb(stack_a, "ra");
				indx--;
			}
			ft_pa_pb(stack_a, stack_b, "pb");
		}
	}
}

int main(int ac, char **av)
{
	stack	stack_a;
	stack	stack_b;
	int	i;

	stack_a.size = ac - 1;
	stack_a.lenght = ac - 1;
	stack_b.size = ac - 1;
	stack_b.lenght = 0;
	filed_arr(&stack_a, &stack_b, av);
	easy_sort(&stack_a, &stack_b);
	i = 0;
		while (i < stack_a.lenght)
		{
			printf("%d ",  stack_a.tab[i]);
			i++;
		}
		printf("\n---------------stack_b------------\n");
	i = 0;
		while (i < stack_b.lenght)
		{
			printf("tab[%d] = %d\n", i, stack_b.tab[i]);
			i++;
		}
}