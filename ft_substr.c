/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 09:22:43 by ade-feli          #+#    #+#             */
/*   Updated: 2021/01/14 09:23:16 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ret;

	if (start >= ft_strlen(s))
	{
		ret = malloc(1);
		ret[0] = 0;
		return (ret);
	}
	if (!(ret = malloc(len + 1)))
		return (0);
	i = 0;
	while (*s && i < len)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
