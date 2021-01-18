/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 09:35:40 by ade-feli          #+#    #+#             */
/*   Updated: 2021/01/14 11:08:58 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*zero(void)
{
	char *ret;

	ret = malloc(2);
	ret[0] = '0';
	ret[1] = 0;
	return (ret);
}

static char	*big(void)
{
	char			*ret;
	char			*num;
	unsigned int	i;

	ret = malloc(15);
	num = "-2147483648";
	i = 0;
	while (num[i])
	{
		ret[i] = num[i];
		i++;
	}
	return (ret);
}

static int	find_len(int n, int sign)
{
	int len;

	len = 1;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	if (sign == 1)
		len++;
	return (len);
}

char		*ft_itoa(int n)
{
	char			*ret;
	unsigned int	len;
	int				sign;

	if (n == 0)
		return (zero());
	if (n == -2147483648)
		return (big());
	sign = n < 0 ? 1 : 0;
	n = n < 0 ? n * -1 : n;
	len = find_len(n, sign);
	if (!(ret = malloc(len + 1)))
		return (0);
	ret[len] = 0;
	while (n > 0)
	{
		ret[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	if (sign == 1)
		ret[len - 1] = '-';
	return (ret);
}
