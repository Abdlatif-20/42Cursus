/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:02:25 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/28 01:18:48 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s) || len == 0)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return str;
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_bzero(str, len + 1);
	i = 0;
	while (i < len && start <= ft_strlen(s))
		str[i++] = s[start++];
	return (str);
}
