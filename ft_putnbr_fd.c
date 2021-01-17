/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 09:33:24 by ade-feli          #+#    #+#             */
/*   Updated: 2021/01/14 09:34:11 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nb_unsigned;

	if (n < 0)
	{
		nb_unsigned = (unsigned int)(-1 * n);
		ft_putchar_fd('-', fd);
	}
	else
		nb_unsigned = (unsigned int)n;
	if (nb_unsigned >= 10)
	{
		ft_putnbr_fd(nb_unsigned / 10, fd);
		ft_putnbr_fd(nb_unsigned % 10, fd);
	}
	else
		ft_putchar_fd(nb_unsigned + '0', fd);
}
