/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:20:45 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/09 22:27:06 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dst;
	const char	*str;
	size_t		i;

	dst = (char *)dest;
	str = (const char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	i = -1;
	while (++i < n)
		dst[i] = str[i];
	return (dst);
}

/*
 #include<stdio.h>
 #include<string.h>
 int main()
 {
     char dst[8];
     printf("\n---------------%s\n", memcpy(dst, 0, 7));
    //printf("\n%s\n", ft_memcpy(dst, 0, 7));
 }*/
