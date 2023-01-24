/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:26:21 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/24 20:53:24 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorted(char **av)
{
	int		size;
	t_list	*head_a;
	t_list	*head_b;

	head_a = NULL;
	head_b = NULL;
	filed_list(av, &head_a);
	size = ft_lstsize(head_a);
	get_index(head_a);
	if (!check_is_sorted(head_a))
	{
		if (size <= 3)
			ft_sort(&head_a);
		else if (size <= 5)
			ft_five(&head_a, &head_b);
		else if (size > 5 && size <= 10)
			ft_sort_ten(&head_a, &head_b);
		else if (size > 5 && size <= 300)
			big_sort(&head_a, &head_b, size / 5);
		else if (size > 300)
			big_sort(&head_a, &head_b, size / 9);
	}
	ft_lstclear(&head_a);
}

int	main(int ac, char **av)
{
	char	**tab;

	if (ac == 1)
		exit (1);
	tab = check_string(av);
	ft_sorted(tab);
	return (0);
}
