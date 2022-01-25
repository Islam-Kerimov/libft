/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctanton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:27:34 by ctanton           #+#    #+#             */
/*   Updated: 2020/11/13 18:23:53 by ctanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	char	*dst2;

	if (s1 == NULL)
	{
		dst = (char *)malloc(ft_strlen(s2) + 1 * sizeof(char));
		return (dst);
	}
	else if (s2 == NULL)
	{
		dst = (char *)malloc(ft_strlen(s1) + 1 * sizeof(char));
		return (dst);
	}
	dst = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	dst2 = dst;
	while (*s1 != '\0')
		*dst++ = *s1++;
	while (*s2 != '\0')
		*dst++ = *s2++;
	*dst = '\0';
	return (dst2);
}
