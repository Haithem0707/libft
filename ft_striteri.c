/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendjab <hbendjab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:02:16 by hbendjab          #+#    #+#             */
/*   Updated: 2023/11/28 16:31:47 by hbendjab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void  f(unsigned int i , char  *c){

//         write(1,c,1);
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
