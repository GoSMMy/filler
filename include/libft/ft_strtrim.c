/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:04:33 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/09 08:24:13 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	issep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char		*ft_strtrim(char const *s)
{
	int		start;
	int		end;

	if (s == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (issep(s[start]))
		start++;
	if (s[start] == '\0')
		return (ft_strnew(1));
	while (issep(s[end]))
		end--;
	return (ft_strsub(s, start, end + 1 - start));
}
