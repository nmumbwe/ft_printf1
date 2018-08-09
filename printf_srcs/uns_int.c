/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uns_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:50:38 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/08/09 08:56:34 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft/libft.h"
#include "../incl/ft_printf.h"

int		right_just_uns(char *temp, int i, t_flag *flag)
{
	char a;

	if (flag->period == 1)
		flag->zero = 0;
	a = flag->zero == 1 ? '0' : ' ';
	while (i-- > 0)
		ft_putnchar(a, flag);
	if (flag->hash == 1)
		ft_putnchar('0', flag);
	while (*temp)
		ft_putnchar(*(temp)++, flag);
	return (1);
}

int		uns_p(char *temp, t_flag *flag)
{
	int	i;

	i = flag->hash ? (flag->width - ft_strlen(temp)) - 1 :
		(flag->width - ft_strlen(temp));
	if (flag->minus == 1)
	{
		if (flag->hash == 1)
			ft_putnchar('0', flag);
		while (*(temp))
			ft_putnchar(*temp++, flag);
		while (i-- > 0)
			ft_putnchar(' ', flag);
		return (1);
	}
	right_just_uns(temp, i, flag);
	return (1);
}

int		uns_int(t_flag *flag, va_list lst, t_length *length)
{
	char			*temp;
	uintmax_t		i;
	int				j;
	uintmax_t		k;

	j = 0;
	i = get_num(flag, length, lst);
	k = i;
	temp = ft_print_hex(i, 10);
	uns_p(temp, flag);
	free(temp);
	return (1);
}
