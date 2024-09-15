/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendjab <hbendjab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:03:09 by hbendjab          #+#    #+#             */
/*   Updated: 2023/11/28 11:12:07 by hbendjab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_point(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*new_string;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (ft_check_point((char)*s1, set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (ft_check_point(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	new_string = (char *)malloc(size * sizeof(char) + 1);
	if (!new_string)
		return (NULL);
	ft_strlcpy(new_string, (char *)s1, (size + 1));
	return (new_string);
}
