/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 11:56:06 by ade-feli          #+#    #+#             */
/*   Updated: 2021/01/11 12:34:01 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t n;

	n = 0;
	while (n < num)
	{
		*((unsigned char *)(ptr + n)) = (unsigned char)value;
		n++;
	}
	return (ptr);
}
