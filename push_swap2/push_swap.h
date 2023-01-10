/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:38:18 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/10 21:32:58 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node
{
	long long int		data;
	int	index;
	struct node	*next;
}				t_list;

t_list		*ft_lstnew(long long content);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);
t_list		*ft_lstlast(t_list *lst);
void		filed_arr(char **av, int ac, t_list **head_a);
void		ft_sa_sb(t_list **stack_a_b);
void		ft_ra_rb(t_list **stack_a_b);
void		ft_ra_rb(t_list **stack_a_b);
int			ft_lstsize(t_list *lst);
void		ft_rra_rrb(t_list **stack_a_b);
void		ft_pa_pb(t_list **stack_a, t_list **stack_b);
void		ft_ss(t_list **stack_a, t_list **stack_b);
void		ft_rr(t_list **stack_a, t_list **stack_b);
int	check_string_valid(char **av);
int check_doublicate(t_list *stack_a);
	long long ft_atoi(const char *str);
void		get_index(t_list *stack_a);
void ft_sort(t_list **stack_a);
size_t ft_strlen(const char *str);
# endif