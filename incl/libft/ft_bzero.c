/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 11:26:21 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/05/22 08:19:22 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (char *)str;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}