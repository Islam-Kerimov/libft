/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctanton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:40:32 by ctanton           #+#    #+#             */
/*   Updated: 2020/12/09 16:06:00 by ctanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int		ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*t_list	*ft_lstnew(void *content)
{
	t_list *lst;

	lst = (t_list*)malloc(sizeof(t_list));
	if (lst == NULL)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

int		main(void)
{
	t_list *list = ft_lstnew("1111");
	t_list *new1 = ft_lstnew("0000");
	t_list *new2 = ft_lstnew("-111");
	t_list *new3 = ft_lstnew("-222");
	t_list *new4 = ft_lstnew("-333");
	t_list *new5 = ft_lstnew("-444");

	ft_lstadd_front(&list, new1);
	ft_lstadd_front(&list, new2);
	ft_lstadd_front(&list, new3);
	ft_lstadd_front(&list, new4);
	ft_lstadd_front(&list, new5);

	printf("%d\n", ft_lstsize(list));

	return (0);
}*/
