/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:02:25 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/24 17:01:53 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	char	*src;

	src = (char *)s;
	str = malloc(len + 1);
	if (len > ft_strlen(s))
		return (NULL);
	if (!str || !s)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(src))
	{
		str[i++] = *(src + start);
		start++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include<stdio.h>
int main()
{
	char * str = strdup("1");
	char *s = ft_substr(str, 42, 42000000);
	//char ptr[] = "Student At 1337 School";
	//char *str = ft_substr("tripouille", 0, 42000);
	printf("%s\n", s);
}*/
