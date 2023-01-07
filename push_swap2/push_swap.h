/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:38:18 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/07 23:31:57 by aben-nei         ###   ########.fr       */
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
	int			data;
	struct node	*next;
}				t_list;

t_list	*ft_lstnew(int content);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
void filed_arr(char **av, int ac, t_list **head_a);
void ft_sa_sb(t_list **stack_a_b);
void	ft_ra_rb(t_list **stack_a_b);
void ft_ra_rb(t_list **stack_a_b);
int	ft_lstsize(t_list *lst);
void ft_rra_rrb(t_list **stack_a_b);
// size_t ft_strlcpy(char *dst, const char *src, size_t size);
// size_t ft_strlen(const char *str);
// char *ft_strjoin(char const *s1, char const *s2);
# endif