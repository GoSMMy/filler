/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:41:15 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/16 09:47:07 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;

	i = 0;
	if ((dest = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1)))
	{
		while (s1[i] != '\0')
		{
			dest[i] = (char)s1[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
