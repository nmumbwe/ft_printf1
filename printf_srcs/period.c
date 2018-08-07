/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   period.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 08:29:50 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/08/04 07:09:26 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft/libft.h"
#include "../incl/ft_printf.h"

int		period(char *str, t_flag *flag, int *index)
{
	if (*str == '.')
	{
		flag->period = 1;
		(*index)++;
		return (1);
	}
	else
		flag->period = 0;
	return (0);
}
