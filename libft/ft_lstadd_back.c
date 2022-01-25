/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fff.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctanton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:13:41 by ctanton           #+#    #+#             */
/*   Updated: 2020/12/09 18:14:51 by ctanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *dst;

    dst = *lst;
    if (dst == NULL)
    {
        new->next = NULL;
        *lst = new;
    }
    else
    {
        while (dst->next != NULL)
            dst = dst->next;
        dst->next = new;
    }
}

/*t_list  *ft_lstnew(void *content)
{
    t_list *lst;

    lst = (t_list*)malloc(sizeof(t_list));
    if (lst == NULL)
        return (NULL);
    lst->content = content;
    lst->next = NULL;
    return (lst);
}

int main()
{
    t_list *list = ft_lstnew("1");
    t_list *new1 = ft_lstnew("2");
    t_list *new2 = ft_lstnew("3");
    t_list *new3 = ft_lstnew("4");
    t_list *new4 = ft_lstnew("5");
    t_list *new5 = ft_lstnew("6");

    ft_lstadd_back(&list, new1);
    ft_lstadd_back(&list, new2);
    ft_lstadd_back(&list, new3);
    ft_lstadd_back(&list, new4);
    ft_lstadd_back(&list, new5);

    while (list != NULL)
    {
        printf("%s\n", list->content);
        list = list->next;
    }

    return (0);
}*/
