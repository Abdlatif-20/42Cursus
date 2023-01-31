/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 03:11:34 by aben-nei          #+#    #+#             */
/*   Updated: 2023/01/31 05:49:20 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

// void	convert_to_binary(char c)
// {
// 	int		j;

// 	j = 0;
// 	while (j <= 7)
// 	{
// 		if ((c & (1 << j)) == 0)
// 			printf("0");
// 		else
// 			printf("1");
// 		j++;
// 	}
// }
void	convert_to_binary(char c)
{
	int		j;
	int		i;
	char tab[9];

	j = 0;
	i = 0;
	while (j <= 8 && i < 8)
	{
		if ((c & (1 << j)) == 0)
			tab[i] = '0';
		else
			tab[i] = '1';
		j++;
		i++;
	}
	tab[i] = '\0';
}

int	main(void)
{
	char	str[6] = "hello";
	convert_to_binary(str[0]);
}
