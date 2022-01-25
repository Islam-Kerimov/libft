/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctanton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 18:39:51 by ctanton           #+#    #+#             */
/*   Updated: 2020/11/11 14:20:19 by ctanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;
	size_t	i;

	new = malloc(count * size);
	if (new == NULL)
		return (new);
	i = 0;
	while (i < count * size)
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}
