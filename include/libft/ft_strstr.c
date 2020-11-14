/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 17:25:34 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/13 14:47:47 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t	i;
	size_t	j;

	if (*to_find == '\0')
		return ((char*)str);
	if (*str == '\0')
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (1)
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
