/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctanton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:50:34 by ctanton           #+#    #+#             */
/*   Updated: 2020/11/10 18:23:08 by ctanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (i < len && needle[j] == haystack[i])
		{
			if (needle[j] != '\0' && haystack[i] != '\0')
			{
				i++;
				j++;
			}
			else
				break ;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i - j]);
		i = i - j + 1;
	}
	return (0);
}


