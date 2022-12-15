/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:47:56 by dduraku           #+#    #+#             */
/*   Updated: 2022/12/15 13:47:57 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <math.h>
#include "../mlx/mlx.h"

#define ESC 53

typedef struct s_cube
{
	void	*mlx;
	void	*window;
	void	*img;
	char	*address;

	int		bits_per_pixel;
	int		line_length;
	int		endian;

}		t_cube;
