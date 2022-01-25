/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctanton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:27:47 by ctanton           #+#    #+#             */
/*   Updated: 2020/11/14 15:36:27 by ctanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		start_word(char const *s1, char const *set)
{
	int ft;
	int st;

	ft = 0;
	st = 0;
	while (set[st] != '\0')
	{
		if (s1[ft] == set[st])
		{
			ft++;
			st = 0;
		}
		else
			st++;
	}
	return (ft);
}

int		finish_word(char const *s1, char const *set)
{
	int lt;
	int st;

	lt = ft_strlen(s1) - 1;
	st = 0;
	while (set[st] != '\0')
	{
		if (s1[lt] == set[st])
		{
			lt--;
			st = 0;
		}
		else
			st++;
	}
	return (lt);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		ft;
	int		lt;
	int		i;
	char	*dst;

	ft = 0;
	if (s1 == NULL)
		return (NULL);
	ft = start_word(s1, set);
	if (s1[ft] == '\0')
	{
		dst = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
		*dst = 0;
		return (dst);
	}
	lt = finish_word(s1, set);
	dst = (char *)malloc(((lt - ft + 1) + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (ft <= lt)
		dst[i++] = s1[ft++];
	dst[i] = '\0';
	return (dst);
}
