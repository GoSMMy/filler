/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 19:51:33 by marrow            #+#    #+#             */
/*   Updated: 2020/10/20 04:18:13 by marrow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H

# define FILLER_H

# include "libft.h"
# include <stdio.h>
# define LOGIN "ocathern.filler"
# define PLAYER -1
# define ENEMY -2
# define MANHATTAN_ALGO(P1, P2, Q1, Q2) (FT_ABS(P1 - P2) + FT_ABS(Q1 - Q2))

typedef struct	s_board
{
	int			height;
	int			width;
	int			**map;
}				t_board;

typedef struct	s_shape
{
	int			height;
	int			width;
	int			**map;
}				t_shape;

typedef struct	s_filler
{
	char		ps;
	char		es;
	t_board		*board;
	t_shape		*shape;
	int			y;
	int			x;
}				t_filler;

t_filler		*init_filler();

int				init_players(t_filler *filler, char *line);

int				create_map(t_filler *filler, char *line);

int				create_piece(t_filler *filler, char *line);

void			parse_board(t_filler *filler, char *line);

void			parse_shape(t_filler *filler, char *line);

void			manh_distance_formater(t_filler *filler);

void			get_cords(t_filler *filler);
#endif
