/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktalbi <ktalbi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 15:27:06 by ktalbi            #+#    #+#             */
/*   Updated: 2021/12/29 17:08:12 by ktalbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strend_cmp(char *str, char *end_str)
{
	int	str_len;
	int	end_len;
	int	i;

	str_len = ft_strlen(str);
	end_len = ft_strlen(end_str);
	i = str_len - end_len;
	while (str[i])
	{
		if (str[i] != end_str[i])
			return (0);
		i++;	
	}
	return (1);
}
