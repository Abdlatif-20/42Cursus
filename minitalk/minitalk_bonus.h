/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:30:56 by aben-nei          #+#    #+#             */
/*   Updated: 2023/02/24 20:36:56 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include<unistd.h>
# include<signal.h>
# include<stdlib.h>

typedef struct sigaction	t_sigaction;

long long	ft_atoi(const char *str);
void		ft_putnbr_fd(int n, int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		handler(int sig, siginfo_t *info, void *cont);
void		*ft_memset(void *str, int c, size_t n);
void		ft_bzero(void *s, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
#endif
