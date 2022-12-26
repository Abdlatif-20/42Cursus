/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:50:04 by aben-nei          #+#    #+#             */
/*   Updated: 2022/12/26 15:36:50 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H

#define PUSH_SWAP_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct stack
{
	int	*tab;
	int	lenght;
	int	size;
}				stack;

void	ft_pa_pb(stack *stack_a, stack *stack_b, char *str);
void	ft_sa_sb(stack *stack_a_b, char *str);
void	ft_ra_rb(stack *stack_a_b, char *str);
void	ft_rra_rrb(stack *stack_a_b, char *str);
void	filed_arr(stack *stack_a, stack *stack_b, char **av);

# endif
