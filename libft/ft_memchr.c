/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctanton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:47:50 by ctanton           #+#    #+#             */
/*   Updated: 2020/11/06 16:48:36 by ctanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*s_char;
	unsigned char	c_char;

	s_char = s;
	c_char = c;
	while (n > 0)
	{
		if (*s_char == c)
			return ((char*)s_char);
		s_char++;
		n--;
	}
	return (NULL);
}
