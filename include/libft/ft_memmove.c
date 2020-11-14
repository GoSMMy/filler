/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 18:08:17 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/13 13:33:12 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	if ((void*)dst == NULL && (void*)src == NULL)
		return (dst);
	if ((unsigned char*)dst <= (unsigned char*)src)
	{
		i = 0;
		while (i < len)
		{
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			((unsigned char*)dst)[i - 1] = ((unsigned char*)src)[i - 1];
			i--;
		}
	}
	return (dst);
}
