/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:54:30 by aben-nei          #+#    #+#             */
/*   Updated: 2022/12/23 15:08:33 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
    int tab[ac - 1];
    int i;
    int j;
    int tmp;

    i = 0;
    j = 1;
    while (i < ac - 1)
    {
        tab[i] = atoi(av[j]);
        i++;
        j++;
    }
    i = 0;
    while (i < ac - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        i++;
    }
    i = 0;
    while (i < ac - 1)
    {
        printf("after -->tab[%d] = %d\n", i, tab[i]);
        i++;
    }
    
    return (0);
}