/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 04:51:52 by aben-nei          #+#    #+#             */
/*   Updated: 2023/02/05 00:49:30 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include<unistd.h>
// # include<stdio.h>
// # include<stdlib.h>
# include<signal.h>
// # include<string.h>

typedef struct sigaction	t_sigaction;

int		ft_atoi(const char *str);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	handler(int sig, siginfo_t *info, void *cont);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
#endif