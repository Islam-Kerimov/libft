/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctanton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:48:28 by ctanton           #+#    #+#             */
/*   Updated: 2020/11/13 13:53:05 by ctanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*src_char;
	unsigned char		*dst_char;

	src_char = (unsigned char *)src;
	dst_char = (unsigned char *)dst;
	if (src_char == NULL && dst_char == NULL)
		return (NULL);
	if ((src_char < dst_char) && (src_char + len > dst_char))
	{
		while (len > 0)
		{
			dst_char[len - 1] = src_char[len - 1];
			len--;
		}
	}
	i = 0;
	while (i < len)
	{
		dst_char[i] = src_char[i];
		i++;
	}
	return (dst_char);
}
