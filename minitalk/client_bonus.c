/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:28:21 by aben-nei          #+#    #+#             */
/*   Updated: 2023/02/03 00:28:35 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

//convert_to_binary function uing bitwise operators
void	convert_to_binary(char c, pid_t pid)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(700);
		i--;
	}
}

int	main(int ac, char **av)
{
	pid_t	pid;
	int		i;

	if (ac != 3)
		ft_putstr_fd("Error: wrong number of arguments", 1);
	else
	{
		i = 0;
		pid = ft_atoi(av[1]);
		while (av[2][i])
		{
			convert_to_binary(av[2][i], pid);
			i++;
		}
		convert_to_binary('\0', pid);
	}
	return (0);
}
