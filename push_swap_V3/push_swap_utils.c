/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:22:49 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/23 11:50:50 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include"get_next_line.h"

void	filed_arr(char **av, t_list **head_a)
{
	t_list	*node;
	int	i;
	i = 0;
	while (av[i])
	{
		node = ft_lstnew(ft_atoi(av[i]));
		ft_lstadd_back(head_a, node);
		i++;
	}
	if (check_valid(*head_a))
		check_doublicate(*head_a);
}

char	**check_string_valid(char *str)
{
	char **tab;
	int	i;
	int	i1;
	int	flage;
	
	tab = ft_split(str, ' ');
	i = -1;
	while (tab[++i])
	{
		i1 = -1;
		flage = 0;
		while (tab[i][++i1])
		{
			if ((tab[i][i1] == '+' || tab[i][i1] == '-') && ++flage)
			{
				if (!(tab[i][i1 + 1] >= '0' && tab[i][i1 + 1] <= '9'))
					return (ft_putstr_fd("Error\n", 2), exit(1), NULL);
			}
			else if (!(tab[i][i1] >= '0' && tab[i][i1] <= '9'))
					return (ft_putstr_fd("Error\n", 2), exit(1), NULL);
			if (flage > 1)
				return (ft_putstr_fd("Error\n", 2), exit(1), NULL);
		}
	}
	return (tab);
}

int	check_is_string_wrong(char *str)
{
	while (*str)
	{
		if (*str != ' ')
			return (1);
		str++;
	}
	return (0);
}

char **check_string(char **av)
{
	char *str;
	str = NULL;
	int	i;

	i = 1;
	while (av[i])
	{
		if (!check_is_string_wrong(av[i]))
		{
			
			return (ft_putstr_fd("Error\n", 2), exit(1), NULL);
		}
			str = ft_strjoin(str, av[i]);
			str = ft_strjoin(str, " ");
		i++;
		}
	return(check_string_valid(str));
}

void	check_doublicate(t_list *stack_a)
{
	t_list	*nodes;
	t_list	*check;

	nodes = stack_a;
	check = stack_a;
	while (nodes != NULL)
	{
		check = nodes->next;
		while (check != NULL)
		{
			if (nodes->data == check->data)
				return (ft_putstr_fd("Error\n", 2), exit(1));
			check = check->next;
		}
		nodes = nodes->next;
	}
}

int	check_valid(t_list *stack_a)
{
	while (stack_a != NULL)
	{
		if (stack_a->data > 2147483647 || stack_a->data < -2147483648)
				return (ft_putstr_fd("Error\n", 2), exit(1), 0);
		stack_a = stack_a->next;
	}
	return (1);
}

int	check_is_sorted(t_list *stack_a)
{
	if(!stack_a)
		return (0);
	while (stack_a->next != NULL)
	{
		if (stack_a->data > stack_a->next->data)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

// int main(int ac, char **av)
// {
// 	t_list *head_a;
// 	t_list *head_b;
// 	head_a = NULL;
// 	head_b = NULL;
// 	// if (ac == 1 && !check_string_valid(av))
// 	// 	return (0);
// 	filed_arr(av, ac, &head_a);
// 	// if (check_doublicate(head_a) == 0)
// 	// 	return (0);
// 	// check_place_of_node(&head_a);
// 	ft_push_chunks(&head_a, &head_b, 5, ac - 1);
// 	// while (head_a)
// 	// {
// 	// 	printf("-->[%lld] = %d\n", head_a->data, head_a->place);
// 	// 	head_a = head_a->next;
// 	// }
	// while (head_b)
	// {
	// 	printf("-->[%lld] = %d\n", head_b->data, head_b->place);
	// 	head_b = head_b->next;
	// }
// }