/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:43:06 by aben-nei          #+#    #+#             */
/*   Updated: 2023/02/01 22:30:37 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

//convert binary to char function using bitwise operators
char	convert_to_char(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i < 8)
	{
		if (str[i] == '1')
			res += 1 << (7 - i);
		i++;
	}
	return (res);
}

//handler function to handle signals from client
void	handler(int sig)
{
	static char	str[9];
	static int	i;

	if (sig == SIGUSR1)
		str[i] = '1';
	else if (sig == SIGUSR2)
		str[i] = '0';
	i++;
	if (i == 8)
	{
		str[i] = '\0';
		if (convert_to_char(str) == '\0')
		{
			ft_putchar_fd('\n', 1);
			i = 0;
		}
		else
		{
			ft_putchar_fd(convert_to_char(str), 1);
			i = 0;
		}
	}
}

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	ft_putnbr_fd(pid, 1);
	ft_putchar_fd('\n', 1);
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1)
		pause();
}
