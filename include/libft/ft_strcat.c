/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 21:02:24 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/13 14:19:26 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char *temp;

	temp = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = (char)*src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
