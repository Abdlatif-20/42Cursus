/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <aben-nei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:17:01 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/13 20:39:05 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	str = malloc(len + 1 * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		str[i] = *s;
		s++;
	}
	str[i] = '\0';
	return (str);
}
/*

#include<stdio.h>
#include<string.h>
 
int main()
{
    char source[] = "GeeksForGeeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);
	printf("%s\n", target);
	char *ptr;
	ptr = ft_strdup(source);
    printf("%s", ptr);
	
    return 0;
}
*/
