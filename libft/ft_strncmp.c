/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctanton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:50:21 by ctanton           #+#    #+#             */
/*   Updated: 2020/11/06 17:22:24 by ctanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_char;
	unsigned char	*s2_char;

	s1_char = (unsigned char *)s1;
	s2_char = (unsigned char *)s2;
	i = 0;
	while ((i < n) && (s1_char[i] != '\0' || s2_char[i] != '\0'))
	{
		if (s1_char[i] == s2_char[i])
			i++;
		else if (s1_char[i] > s2_char[i])
			return (s1_char[i] - s2_char[i]);
		else if (s1_char[i] < s2_char[i])
			return (s1_char[i] - s2_char[i]);
	}
	return (0);
}
