/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocathern <ocathern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:33:11 by ocathern          #+#    #+#             */
/*   Updated: 2020/11/14 17:33:13 by ocathern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

static void		print_cords(t_filler *filler)
{
	ft_putnbr(filler->x);
	ft_putchar(' ');
	ft_putnbr(filler->y);
	ft_putchar('\n');
}

static int		filler_logic(t_filler *filler, char *line)
{
	if (line && !ft_strncmp(line, "Plateau", 7))
	{
		if ((!filler->board->map) & create_map(filler, line))
			return (1);
		parse_board(filler, line);
	}
	if (line && !ft_strncmp(line, "Piece", 5))
	{
		if (create_piece(filler, line))
			return (1);
		parse_shape(filler, line);
		manh_distance_formater(filler);
		get_cords(filler);
		print_cords(filler);
	}
	if (filler->shape->map)
		ft_free_tab((void ***)&filler->shape->map);
	if (line)
		ft_strdel(&line);
	return (0);
}

static void		cleaner(t_filler *filler)
{
	if (filler->board->map)
		ft_free_tab((void ***)&filler->board->map);
	if (filler->shape->map)
		ft_free_tab((void ***)&filler->shape->map);
	if (filler->shape)
		ft_memdel((void **)&filler->shape);
	if (filler->board)
		ft_memdel((void **)&filler->board);
	if (filler != NULL)
		ft_memdel((void **)&filler);
}

int				main(void)
{
	t_filler	*filler;
	char		*line;

	filler = NULL;
	line = NULL;
	if (!(filler = init_filler()) || !init_players(filler, line))
		return (1);
	while (get_next_line(0, &line) > 0)
		if (filler_logic(filler, line))
			return (1);
	cleaner(filler);
	return (0);
}
