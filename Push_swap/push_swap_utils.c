/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdlatif <abdlatif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:54:30 by aben-nei          #+#    #+#             */
/*   Updated: 2022/12/28 18:33:21 by abdlatif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(stack *stack_a, stack *stack_b)
{
	ft_sa_sb(stack_a, "sa");
	ft_sa_sb(stack_b, "sb");
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
	{
		filed_arr(&stack_a, &stack_b, av);
		i = 0;
		while (i < stack_a.lenght)
		{
			printf("tab[%d] = %d\n", i, stack_a.tab[i]);
			i++;
		}
		// ft_ss(&stack_a, &stack_b);
		// ft_sa_sb(&stack_a, "sa");
		ft_pa_pb(&stack_a, &stack_b, "pb");
		ft_pa_pb(&stack_a, &stack_b, "pb");
		ft_pa_pb(&stack_a, &stack_b, "pb");
		ft_pa_pb(&stack_a, &stack_b, "pb");
		ft_pa_pb(&stack_b, &stack_a, "pa");
		// ft_pa_pb(&stack_a, &stack_b, "pb");
		// ft_sa_sb(&stack_a, "sb");
		printf("\n-----------satck_a after push-----------\n");
		i = 0;
		// printf("%d", stack_a.lenght);
		while (i < stack_a.lenght)
		{
			printf("tab[%d] = %d\n", i, stack_a.tab[i]);
			i++;
		}
		printf("\n-----------stack_b-----------\n");
		i = 0;
		while (i < stack_b.lenght)
		{
			printf("tab_b[%d] = %d\n", i, stack_b.tab[i]);
			i++;
		}
		// printf("stack_a_size = %d\nstack_b_size = %d", stack_a.lenght, stack_b.lenght);
	}
}