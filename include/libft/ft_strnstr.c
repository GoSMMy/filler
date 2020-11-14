/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 10:59:10 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/07 13:51:47 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;

	if (*to_find == '\0')
		return ((char*)str);
	if (*str == '\0')
		return (0);
	i = 0;
	while (i < len && str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (j + i < len)
			{
				j++;
				if (to_find[j] == '\0')
					return ((char*)&str[i]);
				if (str[i + j] != to_find[j])
					break ;
			}
		}
		i++;
	}
	return (0);
}
