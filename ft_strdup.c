/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendjab <hbendjab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:02:12 by hbendjab          #+#    #+#             */
/*   Updated: 2023/11/28 11:02:27 by hbendjab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*arr;

	len = ft_strlen(s);
	arr = (char *)malloc(sizeof(char) * len + 1);
	if (arr == NULL)
		return (NULL);
	ft_memmove(arr, s, len);
	arr[len] = '\0';
	return (arr);
}
