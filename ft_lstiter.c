/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendjab <hbendjab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:00:59 by hbendjab          #+#    #+#             */
/*   Updated: 2023/11/28 16:40:43 by hbendjab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*f_applied;

	if (!lst)
		return ;
	f_applied = lst;
	while (f_applied != NULL)
	{
		(*f)(f_applied->content);
		f_applied = f_applied->next;
	}
}
