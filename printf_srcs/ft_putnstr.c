/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 11:37:18 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/08/06 11:38:10 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft/libft.h"
#include "../incl/ft_printf.h"

void	ft_putnstr(char *str, t_flag *flag)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putnchar(str[i], flag);
		i++;
	}
}
