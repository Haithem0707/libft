/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendjab <hbendjab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:00:35 by hbendjab          #+#    #+#             */
/*   Updated: 2023/11/28 14:02:14 by hbendjab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_d_count(int n)
{
	int	digit;

	digit = !n;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	bool		sign;
	int			d_count;
	char		*result;

	sign = n < 0;
	d_count = ft_d_count(n) + sign;
	result = (char *)malloc(sizeof(char) * (d_count + 1));
	if (!result)
		return (result);
	result[d_count] = 0;
	if (sign)
	{
		*result = '-';
		result[--d_count] = -(n % 10) + '0';
		n = -(n / 10);
	}
	while (d_count-- - sign)
	{
		result[d_count] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}
