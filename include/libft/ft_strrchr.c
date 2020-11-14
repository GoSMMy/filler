/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 10:41:55 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/11 15:47:38 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*temp;

	temp = NULL;
	if (ch == '\0' || *str == '\0')
		return (ft_strchr(str, ch));
	while (*str)
	{
		if ((unsigned char)ch == '\0')
			break ;
		if (*str == (unsigned char)ch)
			temp = (char*)str;
		str++;
	}
	return ((char*)temp);
}
