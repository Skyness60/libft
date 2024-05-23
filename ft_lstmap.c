/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:02:38 by sperron           #+#    #+#             */
/*   Updated: 2024/05/21 15:31:39 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*create_node(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*node;

	content = f(lst->content);
	if (!content)
	{
		del(content);
		return (NULL);
	}
	node = ft_lstnew(content);
	if (!node)
	{
		del(content);
		return (NULL);
	}
	return (node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*current;

	if (!lst || !f || !del)
		return (NULL);
	start = create_node(lst, f, del);
	if (!start)
		return (NULL);
	current = start;
	while (lst && lst->next)
	{
		current->next = create_node(lst->next, f, del);
		if (!current->next)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		current = current->next;
		lst = lst->next;
	}
	return (start);
}
