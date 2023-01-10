/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdlatif <abdlatif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:50:04 by aben-nei          #+#    #+#             */
/*   Updated: 2022/12/31 14:33:35 by abdlatif         ###   ########.fr       */
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

void	filed_arr(stack *stack_a, stack *stack_b, char **av);
void	ft_pa_pb(stack *stack_a, stack *stack_b, char *str);
void	ft_sa_sb(stack *stack_a_b, char *str);
void	ft_ra_rb(stack *stack_a_b, char *str);
void	ft_rra_rrb(stack *stack_a_b, char *str);
void	ft_ss(stack *stack_a, stack *stack_b);
void	ft_rr(stack *stack_a, stack *stack_b);
void	ft_rrr(stack *stack_a, stack *stack_b);
int		ft_strchr(char *str, int c);
void	easy_sort(stack *stack_a, stack *stack_b);
int	ft_get_index(int *tab, int num, int size);
# endif
