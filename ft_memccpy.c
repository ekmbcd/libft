/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:10:33 by ade-feli          #+#    #+#             */
/*   Updated: 2021/01/14 10:55:15 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*destination;

	i = 0;
	source = (unsigned char *)src;
	destination = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		*destination++ = *source++;
		if (*(source - 1) == (unsigned char)c)
			return ((void *)destination);
		i++;
	}
	return (0);
}
