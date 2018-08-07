/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmumbwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 07:20:44 by nmumbwe           #+#    #+#             */
/*   Updated: 2018/06/18 16:20:03 by nmumbwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

static	char	*str_cpy(const char *str, char c)
{
	int		x;
	char	*temp;

	x = 0;
	while (str[x] && str[x] != c)
	{
		x++;
	}
	temp = ft_strsub(str, 0, x);
	return (temp);
}

static int		how_many(const char *s, char c)
{
	int pp;
	int count;

	pp = 0;
	count = 0;
	while (s[pp])
	{
		while (s[pp] == c)
			pp++;
		while (s[pp] != c && s[pp] != '\0')
			pp++;
		count++;
	}
	if (s[pp - 1] == c)
		count -= 1;
	return (count);
}

static char		**check_null(char const *str, char c, char **temp)
{
	if (!ft_strchr(str, c))
	{
		temp = (char **)malloc(sizeof(char **) * (2));
		temp[0] = ft_strdup(str);
		temp[1] = NULL;
		return (temp);
	}
	else
		return (NULL);
}

static char		**temp_cpy(const char *str, char c, char **temp)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (!str[i])
		{
			temp[j] = NULL;
			return (temp);
		}
		temp[j] = str_cpy(&str[i], c);
		j++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	temp[j] = NULL;
	return (temp);
}

char			**ft_strsplit(char const *str, char c)
{
	char	**temp;

	temp = NULL;
	if (!str)
		return (temp);
	if (ft_strlen(str) == 0)
	{
		temp = (char **)malloc(sizeof(char **) * (1));
		temp[0] = NULL;
		return (temp);
	}
	if (check_null(str, c, temp))
		return (check_null(str, c, temp));
	if (!(temp = (char **)malloc(sizeof(char **) * (how_many(str, c) + 1))))
		return (NULL);
	temp = temp_cpy(str, c, temp);
	return (temp);
}
