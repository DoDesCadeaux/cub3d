/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:41:39 by dduraku           #+#    #+#             */
/*   Updated: 2022/12/16 15:41:40 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

void	draw_player(t_struct *data, int color, int size_player)
{
	int	i;
	int	j;

	i = 0;
	while (i < size_player)
	{
		i++;
		j = 0;
		while (j < size_player)
		{
			my_mlx_pixel_put(data->cube, j + data->cube->player.px, i + data->cube->player.py, color);

			j++;
		}
	}
}
