/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:55:00 by dduraku           #+#    #+#             */
/*   Updated: 2022/12/15 13:55:01 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int main(void)
{
	t_cube *cube;

	cube = malloc(sizeof(t_cube));
	if (!cube)
		return 1;
	cube->mlx = mlx_init();

	cube->window = mlx_new_window(cube->mlx, 300, 300, "cub3d");

	cube->img = mlx_new_image(cube->mlx, 100, 100);

	cube->address = mlx_get_data_addr(cube->img, &cube->bits_per_pixel,
									  	&cube->line_length, &cube->endian);
	mlx_hook(cube->window, 2, 1L<<0, keybinds, cube);
	mlx_hook(cube->window, 17, 0L, close_on_click, cube);
	mlx_loop(cube->mlx);
}
