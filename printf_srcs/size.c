/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:04:03 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/08/05 13:40:00 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft/libft.h"
#include "../incl/ft_printf.h"

int		right_just_size(int h, int j, char a, t_flag *flag)
{
	while (j-- > 0)
		ft_putnchar(a, flag);
	if (flag->plus == 1 && h > 0)
		ft_putnchar('+', flag);
	ft_putnbrn(h, flag);
	return (flag->ret);
}

int		size(t_flag *flag, va_list lst)
{
	size_t		h;
	int			i;
	int			j;
	char		a;

	h = (size_t)va_arg(lst, intmax_t);
	a = flag->period ? ' ' : '0';
	i = 1;
	j = h;
	while ((j /= 10) > 0)
		i++;
	j = flag->max_width - i;
	if (flag->minus == 1)
	{
		if (h > 0 && flag->plus == 1)
			ft_putnchar('+', flag);
		ft_putnbrn(h, flag);
		while (j-- > 0)
			ft_putnchar(a, flag);
		return (flag->ret);
	}
	else
		return (right_just_size(h, j, a, flag));
}
