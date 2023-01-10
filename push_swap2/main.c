/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:54:20 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/10 21:46:41 by aben-nei         ###   ########.fr       */
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
		node = ft_lstnew(ft_atoi(av[i]));
		ft_lstadd_back(head_a, node);
		i++;
	}	
}

// void	get_index11(t_list *stack_a)
// {
// 	t_list	*head;
// 	t_list	*lowest;
// 	int	size = ft_lstsize(stack_a);
	
// 	head = stack_a;
// 	lowest = NULL;
// 	int i = 0;
// 	while (i < size)
// 	{	
// 		head = stack_a;
// 		while (head)
// 		{
// 			if (head->index == -1)
// 				lowest = head;
// 			head = head->next;
// 		}
// 		head = stack_a;
// 		if (!lowest)
// 			break;
// 		while (head)
// 		{
// 			if ((lowest->data > head->data) && head->index == -1)
// 				lowest = head;
// 			head = head->next;
// 		}
// 		if(lowest->index == -1)
// 			lowest->index = i++;
// 	}
// }

int main(int ac, char **av)
{
	int	i;
	int num;
	t_list *head_a;
	t_list *head_b;
	t_list *head;

	head_a = NULL;
	head_b = NULL;
	i = 0;
	if (ac == 1)
		return (0);
	else if (check_string_valid(av))
	{
		filed_arr(av, ac, &head_a);
		head = head_a;
		if (!check_doublicate(head))
			return (0);
		else if (ac < 5)
			ft_sort(&head);
	}
	head = head_a;
	while (head)
	{
		printf("%lld\t", head->data);
		head = head->next;
	}
	
	return (0);
}