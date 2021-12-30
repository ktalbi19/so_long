/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:45:45 by ktalbi            #+#    #+#             */
/*   Updated: 2021/12/29 16:01:58 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx/mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define IMG_SIZE 64

typedef enum e_bool
{
	TRUE = 1,
	FALSE = 0
}				t_bool;

typedef struct s_game
{
	void	*mlx;
	void	*window;
	int		collects;
	int		moves;
	t_tile	**map;
}				t_game;

typedef struct s_tile
{
	t_tiletype	type;
}				t_tile;

typedef enum e_tiletype
{
	EMPTY = '0',
	WALL = '1',
	COLLECTABLE = 'C',
	PLAYER = 'P',
	EXIT = 'E'
}				t_tiletype;


#endif