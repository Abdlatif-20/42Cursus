/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 03:11:34 by aben-nei          #+#    #+#             */
/*   Updated: 2023/02/24 20:37:38 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

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
		usleep(800);
		i--;
	}
}

int	main(int ac, char **av)
{
	pid_t	pid;
	int		i;

	if (ac != 3)
	{
		ft_putstr_fd("Error: wrong number of arguments !!\n", 1);
		exit(1);
	}
	else
	{
		i = 0;
		pid = ft_atoi(av[1]);
		if (pid <= 0 || ft_atoi(av[1]) > 2147483647)
		{
			ft_putstr_fd("Error: wrong PID !!\n", 1);
			exit(1);
		}
		if (av[2][i] == '\0')
			ft_putstr_fd("Error: empty message !!\n", 1);
		while (av[2][i])
			convert_to_binary(av[2][i++], pid);
	}
	return (0);
}
