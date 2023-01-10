/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdlatif <abdlatif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:54:30 by aben-nei          #+#    #+#             */
/*   Updated: 2022/12/30 19:55:58 by abdlatif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	check_valid(stack *stack_a)
// {
// 	int	i;
// 	i = 0;
// 	while (i < stack_a->lenght)
// 	{	
// 	}
// }

void	ft_ss(stack *stack_a, stack *stack_b)
{
	ft_sa_sb(stack_a, "sa");
	ft_sa_sb(stack_b, "sb");
}

void	ft_rrr(stack *stack_a, stack *stack_b)
{
	ft_rra_rrb(stack_a, "rra");
	ft_rra_rrb(stack_b, "rrb");
}

void	ft_rr(stack *stack_a, stack *stack_b)
{
	ft_ra_rb(stack_a, "ra");
	ft_ra_rb(stack_b, "rb");
}


// int main(int ac, char **av)
// {
// 	printf("%d", check_number(av, ac));
// 	// check_double(av, ac);
// }