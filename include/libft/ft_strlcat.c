/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 10:57:10 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/13 14:37:08 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t destlng;
	size_t srclng;
	size_t i;

	i = 0;
	destlng = ft_strlen(dest);
	srclng = ft_strlen(src);
	if (destlng >= size)
		return (size + srclng);
	while ((dest[i] != '\0') && i < (size - 1))
		i++;
	while (*src && i < (size - 1))
	{
		dest[i] = (char)*src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (destlng + srclng);
}
