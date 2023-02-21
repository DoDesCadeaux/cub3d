/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_on_click.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dduraku <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:08:35 by dduraku           #+#    #+#             */
/*   Updated: 2022/12/15 15:08:42 by dduraku          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

int	close_on_click(int keycode)
{
	if (keycode)
	{
		system("leaks cub3d");
		exit(EXIT_SUCCESS);
	}
	return (0);
}
