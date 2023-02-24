/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:28:21 by aben-nei          #+#    #+#             */
/*   Updated: 2023/02/24 20:50:48 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

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
		usleep(950);
		i--;
	}
}

void	message_sent(int seg)
{
	if (seg == SIGUSR2)
		ft_putstr_fd("\033[33m<<Message sent>>\n\033[0m", 1);
}

int	main(int ac, char **av)
{
	pid_t	pid;
	int		i;

	if (ac != 3)
	{
		ft_putstr_fd("Error: wrong number of arguments", 1);
		exit(1);
	}
	else
	{
		signal(SIGUSR2, message_sent);
		i = 0;
		pid = ft_atoi(av[1]);
		if (pid <= 0 || ft_atoi(av[1]) > 2147483647)
		{
			ft_putstr_fd("Error: wrong PID !!\n", 1);
			exit(1);
		}
		if (av[2][i] == '\0')
			return (ft_putstr_fd("Error: empty message !!\n", 1), exit(1), 0);
		while (av[2][i])
			convert_to_binary(av[2][i++], pid);
		convert_to_binary('\0', pid);
	}
	return (0);
}
