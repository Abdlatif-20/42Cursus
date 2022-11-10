/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 02:14:48 by aben-nei          #+#    #+#             */
/*   Updated: 2022/11/10 16:04:48 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

/* ------------------- Prototype Function -------------------*/

char	*get_next_line(int fd);
char	*get_line(int fd, char *beff, char *saved_string);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);
size_t	ft_strlen1(const char *str);
int		ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*split_line(char *saved_string);

#endif