/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:20:19 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/28 00:18:13 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}

/*
 #include<stdio.h>
 #include<string.h>

 int main(void)
 {
     char *src = "īœ˙ˀ˘¯ˇ¸¯.œ«‘––™ª•¡¶¢˜ˀ";
	char *d1 = strrchr(src, L'–');
	char *d2 = ft_strrchr(src, L'–');

    printf("String with strchr |%c| is - |%s|\n", 't', d1);
    printf("String with ft_strchr |%c| s - |%s|\n", 't', d2);
 }*/
