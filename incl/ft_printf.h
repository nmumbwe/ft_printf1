/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:04:16 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/08/07 14:08:57 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define MAX_INT 2147483647
# define MAX_OCT 17777777777
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <inttypes.h>
# include <wchar.h>
# include <stdio.h>

typedef struct	s_flag
{
	int			hash;
	int			zero;
	int			plus;
	int			minus;
	int			space;
	int			width;
	int			period;
	int			max_width;
	int			per;
	int			ret;
	char		type;
}				t_flag;

typedef struct	s_length
{
	int			hh;
	int			h;
	int			l;
	int			ll;
	int			j;
	int			z;
}				t_length;

int				ft_printf(const char *format, ...);
int				ft_wputstr(t_flag *flag, va_list lst);
void			ft_putnchar(char c, t_flag *flag);
void			ft_wcharput(wchar_t c, t_flag *flag);
void			conv(char *str, t_flag *flag, va_list lst);
int				string(t_flag *flag, va_list lst);
int				interger(t_flag *flag, va_list lst, t_length *length);
int				character(t_flag *flag, va_list lst);
void			ft_putnstr(char *str, t_flag *flag);
int				octal(t_flag *flag, va_list lst, t_length *length);
int				hex(t_flag *flag, va_list lst, t_length *length);
int				per(t_flag *flag);
char			*ft_itoa_base(long value, int base);
int				uns_int(t_flag *flag, va_list lst, t_length *length);
int				long_int(t_flag *flag, va_list lst);
int				search(const char *str, t_flag *flag, va_list lst);
int				printp_addr(t_flag *flag, va_list lst);
char			*flags(char **str, t_flag *flag);
int				ft_wstrlen(wchar_t *str);
char			*type(char **str, t_flag *flag);
char			*manage_width(char **str, t_flag *flag);
char			*manage_precision(char **str, t_flag *flag);
char			*manage_length(char **str, t_length *length);
int				delegate(t_flag *flag, t_length *length, va_list lst);
void			ft_putlong(long c, t_flag *flag);
unsigned int	get_num(t_flag *flag, t_length *length, va_list lst);
uintmax_t		get_unsigned(va_list lst, t_length *length);
intmax_t		get_signed(t_flag *flag, t_length *length, va_list lst);
char			*ft_print_hex(unsigned int value, int base);
int				size(t_flag *flag, va_list lst);
int				ft_wputchar(t_flag *flag, va_list lst);
int				long_long(t_flag *flag, va_list lst);
int				signed_char(t_flag *flag, va_list lst);
void			ft_putnbrn(int c, t_flag *flag);
int				short_int(t_flag *flag, va_list lst, t_length *length);
int				intmax(t_flag *flag, va_list lst, t_length *length);
void			ft_putlong_l(long long c, t_flag *flag);

#endif
