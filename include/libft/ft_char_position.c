/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_position.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <nblackie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 10:23:35 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/23 18:43:39 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_char_position(const char *str, char c)
{
	int	position;

	if (str)
	{
		position = 0;
		while (str[position] != '\0')
		{
			if (str[position] == c)
				return (position);
			position++;
		}
		return (-1);
	}
	return (-1);
}
