/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctanton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:06:16 by ctanton           #+#    #+#             */
/*   Updated: 2020/12/09 16:41:07 by ctanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	int i;
	int list;

	i = 0;
	list = ft_lstsize(lst);
	while (i < list - 1)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}

/*int     ft_lstsize(t_list *lst)
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

t_list    *ft_lstnew(void *content)
{
    t_list *lst;

    lst = (t_list*)malloc(sizeof(t_list));
    if (lst == NULL)
        return (NULL);
    lst->content = content;
    lst->next = NULL;
    return (lst);
}

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst != NULL)
    {
        new->next = *lst;
        *lst = new;
    }
}

int     main(void)
{
    t_list *list = ft_lstnew("6");
    t_list *new1 = ft_lstnew("5");
    t_list *new2 = ft_lstnew("4");
    t_list *new3 = ft_lstnew("3");
    t_list *new4 = ft_lstnew("2");
    t_list *new5 = ft_lstnew("1");

    ft_lstadd_front(&list, new1);
    ft_lstadd_front(&list, new2);
    ft_lstadd_front(&list, new3);
    ft_lstadd_front(&list, new4);
    ft_lstadd_front(&list, new5);

	printf("%d\n\n", ft_lstsize(list));

	ft_lstlast(list);
	printf("%s\n", list->content);

//	while (list != NULL)
//	{
//		printf("%s\n", list->content);
//		list = list->next;
//	}

    return (0);
}*/
