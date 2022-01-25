/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctanton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 18:12:44 by ctanton           #+#    #+#             */
/*   Updated: 2020/12/19 15:26:41 by ctanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *buff;

	if (lst == 0 || f == 0)
		return (0);
	new_lst = ft_lstnew(f(lst->content));
	if (new_lst->content == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		buff = ft_lstnew(f(lst->next));
		if (buff == NULL)
		{
			while (new_lst != NULL)
			{
				new_lst = buff;
				buff = new_lst->next;
				ft_lstdelone(new_lst, del);
			}
			return (0);
		}
		ft_lstadd_back(&new_lst, buff);
		lst = lst->next;
	}
	return (new_lst);
}
