/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 20:38:30 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/13 14:31:28 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t			i;
	int				flag;

	i = 0;
	flag = 0;
	while (i < n)
	{
		if (src[i] == '\0')
			flag = 1;
		if (flag)
			dest[i] = '\0';
		else
			dest[i] = (char)src[i];
		i++;
	}
	return (dest);
}
