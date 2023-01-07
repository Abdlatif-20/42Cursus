/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:54:20 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/07 23:37:17 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	filed_arr(char **av, int ac, t_list **head_a)
{
	t_list	*node;
	int	num;
	int	i;
	i = 1;
	while (i < ac)
	{
		node = ft_lstnew(atoi(av[i]));
		ft_lstadd_back(head_a, node);
		i++;
	}	
}

int main(int ac, char **av)
{
	int	i;
	int num;
	t_list *head_a;
	t_list *head_b;

	head_a = NULL;
	head_b = NULL;
	i = 0;
	if (ac == 1)
		return (0);
	filed_arr(av, ac, &head_a);
	// printf("%d", head_a->next->next->data);
	// ft_sa_sb(&head_a);
	ft_rra_rrb(&head_a);
	while (head_a != NULL)
	{
		printf("%d ", head_a->data);
		head_a = head_a->next;
	}
	
}