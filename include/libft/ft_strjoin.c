/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <nblackie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 15:36:20 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/11 15:00:36 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	char	*temp;

	res = NULL;
	if (s1 && s2)
	{
		if ((res = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		{
			temp = res;
			while (*s1)
			{
				*temp = *s1;
				temp++;
				s1++;
			}
			ft_strcpy(temp, (char*)s2);
			return (res);
		}
		return (res);
	}
	return (NULL);
}
