/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:22:56 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/26 00:34:34 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<stdio.h>
# include<string.h>
# include<stdlib.h>

typedef struct node
{
	long long int		data;
	int					index;
	struct node			*next;
}				t_list;

/*--------------------------- Instruction -------------------------*/

void		ft_sa_sb(t_list **stack_a_b, char *str);
void		ft_ra_rb(t_list **stack_a_b, char *str);
void		ft_ra_rb(t_list **stack_a_b, char *str);
void		ft_rra_rrb(t_list **stack_a_b, char *str);
void		ft_pa_pb(t_list **stack_a, t_list **stack_b, char *str);
void		ft_ss(t_list **stack_a, t_list **stack_b, char *str);
void		ft_rr(t_list **stack_a, t_list **stack_b, char *str);
void		ft_rrr(t_list **stack_a, t_list **stack_b, char *str);

/*--------------------------- List -------------------------*/

t_list		*ft_lstnew(long long content);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);
t_list		*ft_lstlast(t_list *lst);
int			ft_lstsize(t_list *lst);
void		ft_lstclear(t_list **lst);

/*--------------------------- Parsin -------------------------*/

char		**check_string_valid(char *str);
void		check_doublicate(t_list *stack_a);
char		**check_string(char **av);
int			check_valid(t_list *stack_a);
int			check_is_sorted(t_list *stack_a);
int			check_position(t_list *list, int max);

/*------------------------- Function To Sort -------------------------*/

long long	ft_atoi(const char *str);
void		filed_list(char **av, t_list **head_a);
void		get_index(t_list *stack_a);
void		ft_putstr_fd(char *s, int fd);
void		ft_sort(t_list **stack_a);
void		ft_five(t_list **stack_a, t_list **stack_b);
void		ft_sort_ten(t_list **stack_a, t_list **stack_b);
int			num_of_instrection(int size_of_list, int pos);
int			get_index_of_max(t_list *stack);
int			get_index_of_prev_max(t_list *stack);
int			position(t_list *stack_b, int index);
void		big_sort(t_list **stack_a, t_list **stack_b, int chunk);
void		ft_big_sort_500(t_list **stack_a, t_list **stack_b, int chunk);
char		**ft_split(char *s, char c);
char		*ft_substr(char *s, unsigned int start, size_t len);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
#endif