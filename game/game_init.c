/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 14:21:28 by ktalbi            #+#    #+#             */
/*   Updated: 2021/12/29 16:02:03 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_tile	**map_init(t_game *game, int argc, char **argv)
{
	char	**map;
	t_tile	**tilemap;

	if (!valid_file(argc, argv[1]))
		return (NULL);
	map = read_map(argv[1]);
}

t_bool	start(t_game *game, int argc, char **argv)
{
	game->collects = 0;
	game->moves = 0;
	game->map = map_init(game , argc, argv);
}