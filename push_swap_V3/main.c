/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:22:42 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/14 23:25:16 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	filed_arr(char **av, int ac, t_list **head_a)
{
	t_list	*node;
	int	i;
	i = 1;
	while (i < ac)
	{
		node = ft_lstnew(ft_atoi(av[i]));
		ft_lstadd_back(head_a, node);
		i++;
	}	
}

// int main(int ac, char **av)
// {
// 	int	i;
// 	int num;
// 	t_list *head_a;
// 	t_list *head;
// 	t_list *head_b;

// 	head_a = NULL;
// 	head_b = NULL;
// 	i = 0;
// 	if (ac == 1)
// 		return (0);
// 	filed_arr(av, ac, &head_a);
// 	return (0);
// }

