
#include "push_swap.h"

int check_position(t_list *list, int max)
{
    t_list *head;
	int pos;

	pos = 0;
	head = list;
	while (head)
	{
		if (list->index < max)
			return (pos);
		head = head->next;
		pos++;
	}
    return (pos);
}

void    ft_big_sort(t_list **stack_a, t_list **stack_b, int max)
{
    t_list *head;
    t_list *head_b;
    int i = 0;
    int j = 0;

    head = *stack_a;
    head_b = *stack_b;

    while ((*stack_a))
    {
        // (*stack_a) = *stack_a;
        while (i < max )
        {
            // write(1, "hello", 5);
					(*stack_a) = *stack_a;
                while (check_position((*stack_a), max) < max / 2 && (*stack_a)->index > max)
				{
                    ft_rra_rrb(stack_a);
					printf("ra\n");
				}
                while (check_position((*stack_a), max) > max / 2 && (*stack_a)->index > max)
				{
					// write (1, "h", 1);
                    ft_ra_rb(stack_a);
					printf("rra\n");
					// (*stack_a) = *stack_a;
				}
                if (*stack_a)
				{
                    ft_pa_pb(stack_a, stack_b);
					printf("pb\n");
				}
					// int c = (*stack_a)->index;
					// 	c+= '0';
					// write (1, &c, 1);
            i++;
        }
		// printf("index = %i\n", i);
		max +=5;
    }
}

int main(int ac, char **av)
{
	int	i;
	int max = 5;
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
		// if (!check_doublicate(head))
		// 	return (0);
		// else if (ac < 5 && !check_is_sorted(head))
		// {
		// 	ft_sort(&head);
		// }
		// ft_sa_sb(&head);
	}
	// head = head_a;
	get_index(head);
    ft_big_sort(&head_a, &head_b, max);
	// ft_ra_rb(&head);
	head = head_b;
	// while (head)
	// {
	// 	printf("%lld ", head->data) ;
	// 	head = head->next;
	// }
	// printf("%d", check_position(head, *head->next));
	return (0);
}