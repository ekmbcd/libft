/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 12:24:45 by ade-feli          #+#    #+#             */
/*   Updated: 2021/01/14 09:32:48 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		strcopy(char *a, const char *b)
{
	int i;

	i = 0;
	while (b[i])
	{
		a[i] = b[i];
		i++;
	}
	a[i] = 0;
}

char			*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
	{
		i++;
	}
	if (!(dest = (char *)malloc(i + 1)))
		return (0);
	strcopy(dest, src);
	return (dest);
}
