/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:04:04 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/11 15:50:42 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *res;
	char *temp;

	res = NULL;
	if (s && f)
	{
		if ((res = ft_strnew(ft_strlen((char*)s))))
		{
			temp = res;
			while (*s)
			{
				*temp = f(*s);
				temp++;
				s++;
			}
		}
	}
	return (res);
}
