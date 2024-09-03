/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsoe <hsoe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:20:44 by hsoe              #+#    #+#             */
/*   Updated: 2024/09/03 15:59:27 by hsoe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*prev;

	if (!f || !del || !lst)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (new == NULL)
		return (NULL);
	tmp = lst->next;
	del(lst->content);
	free(lst);
	while (tmp)
	{
		if (f(tmp) == NULL)
			return (NULL);
		ft_lstadd_back(&new, f(tmp));
		del(tmp->content);
		prev = tmp;
		tmp = tmp->next;
		free(prev);
	}
	return (begin);
}