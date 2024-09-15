/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendjab <hbendjab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:02:03 by hbendjab          #+#    #+#             */
/*   Updated: 2023/11/28 16:31:33 by hbendjab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_memory(char **ptr, int i)
{
	while (i > 0)
	{
		free(ptr[i]);
		i--;
	}
	free(ptr);
	return (0);
}

char	*ft_factory_ofword(char *word, char const *s, int b, int w_len)
{
	int	i;

	i = 0;
	while (w_len > 0)
	{
		word[i] = s[b - w_len];
		i++;
		w_len--;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_start_split(char **result, char const *s, char c, int w_num)
{
	int		i;
	int		b;
	int		w_len;

	i = 0;
	b = 0;
	w_len = 0;
	while (s[b] && i < w_num)
	{
		while (s[b] && s[b] == c)
			b++;
		while (s[b] && s[b] != c)
		{
			b++;
			w_len++;
		}
		result[i] = (char *)malloc(sizeof(char) * (w_len + 1));
		if (!result)
			return (ft_free_memory(result, i));
		ft_factory_ofword(result[i], s, b, w_len);
		w_len = 0;
		i++;
	}
	result[i] = 0;
	return (result);
}

int	ft_count_word(char const *s, char c)
{
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	int		count_num;
	char	**result;

	if (!s)
		return (0);
	count_num = ft_count_word(s, c);
	result = (char **)malloc(sizeof(char *) * (count_num + 1));
	if (!result)
		return (NULL);
	ft_start_split(result, s, c, count_num);
	return (result);
}
