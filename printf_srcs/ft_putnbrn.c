/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 12:07:31 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/08/05 13:49:04 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft/libft.h"
#include "../incl/ft_printf.h"

void	ft_putnbrn(int c, t_flag *flag)
{
	if (c < 0)
	{
		ft_putnchar('-', flag);
		c = c * -1;
	}
	if (c >= 10)
		ft_putnbrn(c / 10, flag);
	ft_putnchar((c % 10) + '0', flag);
}
