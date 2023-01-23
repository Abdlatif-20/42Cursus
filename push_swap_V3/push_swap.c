/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:26:21 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/23 11:51:59 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void ff()
// {
// 	system("leaks push_swap");
// }

void	ft_sorted(char **av)
{
	int size;
	t_list *head_a;
	t_list *head_b;

	head_a = NULL;
	head_b = NULL;

	filed_arr(av, &head_a);
	size = ft_lstsize(head_a);
	get_index(head_a);
	if (!check_is_sorted(head_a))
	{
		if (size <= 3)
			ft_sort(&head_a);
		else if(size <= 5)
			ft_five(&head_a, &head_b);
		else if (size > 5 && size <= 300)
			ft_big_sort_100(&head_a, &head_b, size / 5);
		else if (size > 300)
			ft_big_sort_500(&head_a, &head_b, size / 9);
	}	
}

int	main(int ac, char **av)
{
	// atexit(ff);
	char **tab;
	if (ac < 3)
		exit (1);

	tab = check_string(av);
	ft_sorted(tab);
	
	return (0);
}
