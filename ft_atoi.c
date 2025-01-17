/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendjab <hbendjab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:38:26 by hbendjab          #+#    #+#             */
/*   Updated: 2023/11/28 14:01:53 by hbendjab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sn;
	unsigned long int	rs;

	i = 0;
	sn = 1;
	rs = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sn = -1;
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		if ((rs > (long long)LONG_MAX / 100) && (sn == 1))
			return (-1);
		else if ((rs > (long long)LONG_MAX / 100) && (sn == -1))
			return (0);
		rs = rs * 10 + str[i] - '0';
		i++;
	}
	return (rs * sn);
}
