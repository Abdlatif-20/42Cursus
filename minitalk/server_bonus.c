/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:28:46 by aben-nei          #+#    #+#             */
/*   Updated: 2023/02/03 23:48:36 by aben-nei         ###   ########.fr       */
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

//function to hold all the bits of the unicode character and print it when it's complete
// void	check_unicode(char c)
// {
// 	static char	str[5];
// 	static int	i;
// 	str[i] = c;
// 	i++;
// 	if (i == 4)
// 	{
// 		str[i] = '\0';
// 		ft_putstr_fd(str, 1);
// 		i = 0;
// 	}
// }

// function to signle from the server to the client that the message is complete
// void	send_complete(pid_t pid)
// {
// 	int	i;

// 	i = 0;
// 	while (i < 8)
// 	{
// 		kill(pid, SIGUSR2);
// 		usleep(700);
// 		i++;
// 	}
// }

//handler function to handle signals from client
void	handler(int sig, siginfo_t *info, void *cont)
{
	static char	str[9];
	static int	get_pid;
	static int	i;
	int			new;

	(void)cont;
	new = info->si_pid;
	if (new != get_pid)
	{
		get_pid = new;
		ft_bzero(str, 9);
		i = 0;
	}
	if (sig == SIGUSR1)
		str[i] = '1';
	else if (sig == SIGUSR2)
		str[i] = '0';
	i++;
	if (i == 8)
	{
		str[i] = '\0';
		i = 0;
		ft_putchar_fd(convert_to_char(str), 1);
	}
	// if (convert_to_char(str) == '\0')
	// 	send_complete(get_pid);
}

int	main(void)
{
	pid_t		pid;
	t_sigaction	sa;

	pid = getpid();
	ft_putnbr_fd(pid, 1);
	ft_putchar_fd('\n', 1);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = handler;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
}
