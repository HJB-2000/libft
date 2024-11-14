/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbahmida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 03:02:03 by jbahmida          #+#    #+#             */
/*   Updated: 2024/11/09 18:00:04 by jbahmida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_list	*handle_new_node(t_list **new_list, void *new_content,
		void (*del)(void *))
{
	t_list	*new_node;

	new_node = ft_lstnew(new_content);
	if (!new_node)
	{
		del(new_content);
		ft_lstclear(new_list, del);
		return (NULL);
	}
	ft_lstadd_back(new_list, new_node);
	return (new_node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	void	*new_content;

	if (!f || !del || !lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (!handle_new_node(&new_list, new_content, del))
			return (NULL);
		lst = lst->next;
	}
	return (new_list);
}
