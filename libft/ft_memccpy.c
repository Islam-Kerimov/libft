/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctanton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:47:26 by ctanton           #+#    #+#             */
/*   Updated: 2020/11/07 13:31:44 by ctanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*src_char;
	char	*dst_char;
	char	*dst_out;

	src_char = (char *)src;
	dst_char = (char *)dst;
	if (src_char == NULL && dst_char == NULL)
		return (NULL);
	i = 0;
	dst_out = 0;
	while (i < n && dst_out == '\0')
	{
		dst_char[i] = src_char[i];
		if (src_char[i] == ((char)c))
			dst_out = dst_char + (++i);
		i++;
	}
	return (dst_out);
}
