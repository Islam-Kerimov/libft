/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctanton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:27:19 by ctanton           #+#    #+#             */
/*   Updated: 2020/11/13 18:18:35 by ctanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dst;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		dst = (char *)malloc(sizeof(char));
		if (dst == NULL)
			return (NULL);
		*dst = 0;
		return (dst);
	}
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (len-- > 0 && s[i] != '\0')
		dst[j++] = s[i++];
	dst[j] = '\0';
	return (dst);
}
