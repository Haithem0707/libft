/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendjab <hbendjab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:02:26 by hbendjab          #+#    #+#             */
/*   Updated: 2023/11/28 16:31:46 by hbendjab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsts)
{
	size_t	se;
	size_t	dt;
	size_t	dleen;
	size_t	sw;

	se = ft_strlen(src);
	if (!dst && dsts == 0)
	{
		return (se);
	}
	dt = ft_strlen(dst);
	dleen = dt;
	if (dsts <= dleen)
	{
		return (se + dsts);
	}
	sw = 0;
	while (src[sw] && dt + 1 < dsts)
	{
		dst[dt] = src[sw];
		dt++;
		sw++;
	}
	dst[dt] = '\0';
	return (dleen + se);
}
