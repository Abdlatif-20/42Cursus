/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-nei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:24:52 by aben-nei          #+#    #+#             */
/*   Updated: 2022/10/25 04:05:47 by aben-nei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *p = malloc(sizeof(t_list));
	if(!p)
		return(NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}
