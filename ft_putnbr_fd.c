/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendjab <hbendjab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:01:56 by hbendjab          #+#    #+#             */
/*   Updated: 2023/11/28 16:31:58 by hbendjab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbl;

	nbl = n;
	if (nbl < 0)
	{
		write(fd, "-", 1);
		nbl *= -1;
	}
	if (nbl > 9)
	{
		ft_putnbr_fd(nbl / 10, fd);
		ft_putchar_fd((nbl % 10) + '0', fd);
	}
	else
		ft_putchar_fd(nbl + '0', fd);
}
