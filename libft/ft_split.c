/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:10:02 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/21 23:56:38 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	num_word(char const *s, char c)
{
	int	i;
	int	nw;

	i = 0;
	nw = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			nw++;
		}
	}
	return (nw);
}

int	word_len(char const *s, char c, int *index)
{
	int	i;

	i = 0;
	while (s[*index] != c && s[*index])
	{
		i++;
		(*index)++;
	}
	return (i);
}

void	check_allocate(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		while (tab[i][j])
			j++;
		if (!ft_strlen(tab[i]))
			free(tab);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		len;
	int		start;

	if (!s)
		return (NULL);
	len = num_word(s, c);
	tab = (char **)malloc((len + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	tab[len] = NULL;
	i = 0;
	j = 0;
	while (j < len)
	{
		while (s[i] == c)
			i++;
		start = i;
		tab[j++] = ft_substr(s, start, word_len(s, c, &i));
	}
	return (tab);
}
/*
#include<stdio.h>
int	main(void)
{
char **tab;
char src[] = "Hello World !";
tab = ft_split(src, ' ');
for (int i = 0; i <= 3; i++)
printf("tab[%d] = %s\n", i, tab[i]);
}*/
