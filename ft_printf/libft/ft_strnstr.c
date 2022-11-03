/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:55:18 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/13 15:15:38 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *src, char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)src;
	i = 0;
	j = 0;
	if (!src && !len)
		return (NULL);
	if (!to_find[j])
		return (str);
	while (str[i] && i < len)
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0' && (i + j) < len)
			j++;
		if (to_find[j] == '\0')
			return (str + i);
	j = 0;
	i++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>
 int main()
 {
	 char str[0] = "";
    // printf("%s\n", ft_strnstr(NULL,NULL, 0));
     //printf("%s\n", ft_strnstr(str, "", 1));
	 printf("%s\n", ft_strnstr(((void *)0), "fake", 0));
 }*/
