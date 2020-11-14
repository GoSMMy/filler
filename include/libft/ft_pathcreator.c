/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pathcreator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocathern <ocathern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:40:01 by ocathern          #+#    #+#             */
/*   Updated: 2020/02/25 15:21:41 by ocathern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_pathcreator(char *s1, char *s2)
{
	char	*tmp;

	if (!s2 || !s1)
		return (NULL);
	if (!(s1[ft_strlen(s1) - 1] == '/'))
	{
		if (s2[0] == '/')
			return (ft_strjoin(s1, s2));
		else
		{
			tmp = ft_freestrjoin(ft_strjoinch(s1, '/'), s2, 0);
			return (tmp);
		}
	}
	else
	{
		if (s2[0] == '/')
			return (ft_strjoin(s1, s2 + 1));
		else
			return (ft_strjoin(s1, s2));
	}
}
