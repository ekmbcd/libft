/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 09:33:43 by ade-feli          #+#    #+#             */
/*   Updated: 2021/01/14 09:33:55 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *node;

	node = (t_list*)malloc(sizeof(t_list));
	if (!node)
		return (0);
	if (!content)
	{
		node->content = 0;
		node->next = 0;
	}
	else
	{
		node->content = content;
		node->next = 0;
	}
	return (node);
}
