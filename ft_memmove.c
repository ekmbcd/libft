/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 15:48:56 by ade-feli          #+#    #+#             */
/*   Updated: 2021/01/14 11:02:15 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	void	*ret;

	ret = dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst > src && dst < len + src)
	{
		while (len > 0)
		{
			*(unsigned char *)(dst + len - 1) =
			*(unsigned char *)(src + len - 1);
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (ret);
}
