/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendjab <hbendjab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:03:03 by hbendjab          #+#    #+#             */
/*   Updated: 2023/11/28 11:09:49 by hbendjab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *F_find, size_t len)
{
	size_t	i;
	size_t	f;

	i = 0;
	if (!str && !len)
		return (0);
	if (F_find[0] == '\0' || F_find == str)
		return ((char *)str);
	while (str[i] != '\0')
	{
		f = 0;
		while (str[i + f] == F_find[f] && (f + i) < len)
		{
			if (str[i + f] == '\0' && F_find[f] == '\0')
				return ((char *)&str[i]);
			f++;
		}
		if (F_find[f] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
