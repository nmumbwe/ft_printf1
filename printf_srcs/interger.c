/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interger.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 14:00:45 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/08/09 10:55:30 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft/libft.h"
#include "../incl/ft_printf.h"
#include <stdio.h>

int		right_just_inte(char *temp, int i, t_flag *flag)
{
	char	a;
	int		b;

	a = flag->zero == 1 ? '0' : ' ';
	b = flag->width - ft_strlen(temp) - i - flag->plus;
	if (flag->space == 1)
	{
		b--;
		ft_putnchar(' ', flag);
	}
	while (b-- > 0)
		ft_putnchar(' ', flag);
	if (flag->plus == 1 && *temp != '-' && flag->zero == 1)
		ft_putnchar('+', flag);
	while (i-- > 0)
		ft_putnchar(a, flag);
	if (flag->plus == 1 && *temp != '-' && flag->zero == 0)
		ft_putnchar('+', flag);
	while (*temp)
		ft_putnchar(*(temp)++, flag);
	return (1);
}

int		inte_p(char *temp, t_flag *flag, int i)
{
	if (flag->minus == 1)
	{
		if (flag->plus == 1 && *temp != '-')
		{
			ft_putnchar('+', flag);
			i--;
		}
		while (*(temp))
			ft_putnchar(*temp++, flag);
		while (i-- > 0)
			ft_putnchar(' ', flag);
		return (1);
	}
	right_just_inte(temp, i, flag);
	return (1);
}

int		interger(t_flag *flag, va_list lst, t_length *length)
{
	char			*temp;
	int				i;
	int				j;
	int				len;

	j = 0;
	i = get_num(flag, length, lst);
	temp = ft_itoa_base(i, 10);
	len = flag->width - ft_strlen(temp) - flag->plus - flag->space;
	if (flag->period == 1)
	{
		flag->zero = 1;
		len = flag->max_width - ft_strlen(temp);
	}
	inte_p(temp, flag, len);
	free(temp);
	return (1);
}
