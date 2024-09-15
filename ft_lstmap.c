/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbendjab <hbendjab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:01:15 by hbendjab          #+#    #+#             */
/*   Updated: 2023/11/28 14:06:52 by hbendjab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
	void (*del)(void *))
{
	t_list	*nw;
	t_list	*nd;

	if (lst == 0 || f == 0)
		return (0);
	nw = NULL;
	while (lst)
	{
		nd = ft_lstnew(f(lst->content));
		if (!nd)
		{
			ft_lstclear(&nd, del);
			return (NULL);
		}
		ft_lstadd_back(&nw, nd);
		lst = lst->next;
	}
	return (nw);
}
