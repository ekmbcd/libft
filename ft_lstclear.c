/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 09:54:09 by ade-feli          #+#    #+#             */
/*   Updated: 2021/01/14 09:54:45 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;
	t_list *prec;

	prec = *lst;
	if ((*lst) == 0)
		return ;
	while (prec)
	{
		temp = prec;
		prec = prec->next;
		ft_lstdelone(temp, del);
	}
	*lst = 0;
}
