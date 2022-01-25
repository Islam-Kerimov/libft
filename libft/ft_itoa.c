/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctanton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:28:27 by ctanton           #+#    #+#             */
/*   Updated: 2020/11/16 15:01:07 by ctanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_res(int n)
{
	size_t			len;
	long long int	pn;

	len = 0;
	pn = n;
	if (n < 0)
	{
		pn = pn * (-1);
		len++;
	}
	if (pn == 0)
		return (1);
	while (pn > 0)
	{
		pn = pn / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*dst;
	long long int	pn;
	size_t			len;

	pn = (long long int)n;
	len = len_res(pn);
	dst = (char *)malloc(len + 1);
	if (dst == NULL)
		return (NULL);
	dst[len--] = '\0';
	if (pn == 0)
		dst[0] = '0';
	if (pn < 0)
	{
		*dst = '-';
		pn = pn * (-1);
	}
	while (pn > 0)
	{
		dst[len--] = (pn % 10) + '0';
		pn = pn / 10;
	}
	return (dst);
}
