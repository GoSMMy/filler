/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 10:38:57 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/13 14:23:31 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	char *temp;

	if (nb == 0)
		return (dest);
	temp = dest;
	while (*temp)
		temp++;
	while (*src)
	{
		if (nb == 0)
			break ;
		*temp = (char)*src;
		temp++;
		src++;
		nb--;
	}
	*temp = '\0';
	return (dest);
}
