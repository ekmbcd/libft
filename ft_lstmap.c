/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 18:32:35 by ade-feli          #+#    #+#             */
/*   Updated: 2021/01/14 09:52:48 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *last;
	t_list *first;

	first = 0;
	while (lst)
	{
		if (!first)
		{
			last = ft_lstnew(f(lst->content));
			first = last;
		}
		else
		{
			last->next = ft_lstnew(f(lst->content));
			last = last->next;
			if (!last)
			{
				ft_lstclear(&first, del);
				return (0);
			}
		}
		lst = lst->next;
	}
	return (first);
}
