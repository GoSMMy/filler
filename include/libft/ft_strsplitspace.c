/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitspace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocathern <ocathern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:56:59 by ocathern          #+#    #+#             */
/*   Updated: 2020/02/25 15:22:52 by ocathern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countwords(char const *str)
{
	int count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (ft_isspace(str[i]))
			i++;
		if (!ft_isspace(str[i]) && str[i] != '\0')
			count++;
		while (!ft_isspace(str[i]) && str[i] != '\0')
			i++;
	}
	return (count);
}

static int		get_word_len(char const *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (ft_isspace(str[i]))
		i++;
	while (!ft_isspace(str[i]) && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char			**ft_strsplitspace(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**res;

	if (!str || !(res = (char **)malloc(sizeof(char *) *
		(ft_countwords(str) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_countwords(str))
	{
		k = 0;
		if (!(res[i] = ft_strnew(get_word_len(&str[j]) + 1)))
			res[i] = NULL;
		while (ft_isspace(str[j]))
			j++;
		while (!ft_isspace(str[j]) && str[j])
			res[i][k++] = str[j++];
		res[i][k] = '\0';
	}
	res[i] = 0;
	return (res);
}
