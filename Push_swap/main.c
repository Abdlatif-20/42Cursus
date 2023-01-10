/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdlatif <abdlatif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 21:09:24 by abdlatif          #+#    #+#             */
/*   Updated: 2022/12/28 21:12:45 by abdlatif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    stack   stack_a;
    stack   stack_b;

    stack_a.size = ac - 1;
    stack_a.lenght = ac - 1;
    stack_b.lenght = 0;
    stack_b.size = ac - 1;
    if (ac > 4)
    {
        filed_arr(stack_a, stack_b, av);
        
    }
}