/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:02:25 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/26 11:17:30 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	if (len >= ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = malloc(len + 1);
	if (!str || !s)
		return (NULL);
	i = 0;
	while (i < len && start <= ft_strlen(s))
	{
		str[i++] = *(s + start);
		start++;
	}
	str[i] = '\0';
	return (str);
}
