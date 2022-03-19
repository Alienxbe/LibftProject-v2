/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 19:16:03 by mykman            #+#    #+#             */
/*   Updated: 2022/03/19 19:37:40 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstnew;
	t_list	*new;

	if (!lst)
		return (NULL);
	lstnew = NULL;
	while (lst)
	{
		if (f)
			new = ft_lstnew(f(lst->content));
		else
			new = ft_lstnew(lst->content);
		if (!new)
		{
			ft_lstclear(&lstnew, del);
			return (NULL);
		}
		ft_lstadd_back(&lstnew, new);
		lst = lst->next;
	}
	return (lstnew);
}
