/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendjab <hbendjab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:00:50 by hbendjab          #+#    #+#             */
/*   Updated: 2023/11/28 14:02:29 by hbendjab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nclear;

	if (!lst)
		return ;
	while (*lst)
	{
		nclear = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nclear;
	}
}
