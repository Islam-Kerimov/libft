/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctanton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 18:40:03 by ctanton           #+#    #+#             */
/*   Updated: 2020/11/11 14:24:56 by ctanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		j;
	int		i;
	char	*new_s1;

	i = 0;
	while (s1[i] != '\0')
		i++;
	new_s1 = (char *)malloc((i + 1) * sizeof(*new_s1));
	if (new_s1 == NULL)
		return (NULL);
	j = 0;
	while (s1[j] != '\0')
	{
		new_s1[j] = s1[j];
		j++;
	}
	new_s1[j] = '\0';
	return (new_s1);
}
