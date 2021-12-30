/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 16:02:58 by ktalbi            #+#    #+#             */
/*   Updated: 2021/12/29 16:57:07 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include <fcntl.h>

int	line_count(char *file)
{
	int		nbr_line;
	int		fd;
	int		reader;
	char	c;

	fd = open(file, O_RDONLY);
	if (!fd)
		return (-1);
	nbr_line = 1;
	while (1)
	{
		reader = read(fd, &c, 1);
		if (reader == 0)
			break;
		if (reader < 0)
			return (-1);
		if (c == '\n')
			nbr_line++;
	}
	return (nbr_line);
}

char	**alloc_line(char *file)
{
	char	**map;
	int		nbr_line;

	nbr_line = line_count(file);
	if (nbr_line <= 0)
		return (null_error("error in the number of line in the file"));
	map = malloc(sizeof(char *) * nbr_line + 1);
	if (map == NULL)
		return (null_error("malloc error on alloc_line()"));
	return (map);
}

char	**read_map(char *file)
{
	char	**map;
	int		fd;
	int		i;

	map = alloc_line(file);
	if (map == NULL)
		return (NULL);
	fd = open(file, O_RDONLY);
	i = 0;
	
}