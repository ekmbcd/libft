/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 09:30:08 by ade-feli          #+#    #+#             */
/*   Updated: 2021/01/12 09:59:55 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (*(src + i) && i < dstsize - 1)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = 0;
	return (ft_strlen(src));
}
