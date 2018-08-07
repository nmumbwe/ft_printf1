/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:00:32 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/05/29 14:50:44 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *str1, const char *str2)
{
	int		i;
	char	*temp;
	int		dest_len;

	if (!str1 || !str2)
		return (NULL);
	i = 0;
	dest_len = ft_strlen((char *)str1);
	if (!(temp = malloc(ft_strlen((char *)str1) + ft_strlen((char *)str2) + 1)))
		return (NULL);
	ft_strcpy(temp, (char *)str1);
	while (str2[i] != '\0')
	{
		temp[dest_len] = str2[i];
		i++;
		dest_len++;
	}
	temp[dest_len] = str2[i];
	return (temp);
}
