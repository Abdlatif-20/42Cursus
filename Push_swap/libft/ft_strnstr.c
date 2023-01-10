/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdlatif <abdlatif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:55:18 by aben-nei          #+#    #+#             */
/*   Updated: 2022/12/28 21:34:54 by abdlatif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
