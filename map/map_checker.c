/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 15:08:59 by ktalbi            #+#    #+#             */
/*   Updated: 2021/12/29 15:59:49 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	valid_file(int argc, char *file)
{
	if (argc == 1)
		return (error("not enough args"));
	if (argc > 2)
		printf("Only the first file will be used");
	if (!ft_strend_cmp(file, ".ber"))
		return (error("map should be a .ber file"));
	return (1);
}