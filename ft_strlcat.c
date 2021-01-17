/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 09:54:24 by ade-feli          #+#    #+#             */
/*   Updated: 2021/01/12 10:42:58 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(dst);
	while (dstsize && *(src + i) && i + len < dstsize - 1)
	{
		*(dst + len + i) = *(src + i);
		i++;
	}
	if (len < dstsize)
		*(dst + len + i) = 0;
	if (len >= dstsize)
		return (ft_strlen(src) + dstsize);
	return (ft_strlen(src) + len);
}
