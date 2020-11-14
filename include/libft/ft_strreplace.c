/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocathern <ocathern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:40:35 by ocathern          #+#    #+#             */
/*   Updated: 2020/02/25 16:42:49 by ocathern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strreplace(char *str, char *term, char *replace_by)
{
	int		i;
	char	*new_path;
	int		done;

	if (!ft_strstr(str, term))
		return (NULL);
	new_path = ft_strnew(1);
	i = -1;
	done = 0;
	while (str[++i])
	{
		if (ft_strncmp(str + i, term, ft_strlen(term)) == 0 && !done)
		{
			new_path = ft_freestrjoin(new_path, replace_by, 0);
			i += ft_strlen(term);
			if (!str[i])
				break ;
			new_path = ft_freestrjoinch(new_path, str[i]);
			done = 1;
		}
		else
			new_path = ft_freestrjoinch(new_path, str[i]);
	}
	return (new_path);
}
