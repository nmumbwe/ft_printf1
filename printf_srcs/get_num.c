/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:12:36 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/08/09 08:51:47 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft/libft.h"
#include "../incl/ft_printf.h"

uintmax_t		get_num(t_flag *flag, t_length *length, va_list lst)
{
	uintmax_t	 j;

	j = va_arg(lst, uintmax_t);
	if (length->hh == 1)
		j = (unsigned char)j;
	else if (length->ll == 1)
		j = (unsigned long long int)j;
	else if (length->h == 1)
		j = (unsigned short int)j;
	else if (length->l == 1 || flag->type == 'O' || flag->type == 'U')
		j = (unsigned long int)j;
	else if (length->z == 1)
		j = (size_t)j;
	return (j);
}
