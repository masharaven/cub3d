/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccade <ccade@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:10:53 by ccade             #+#    #+#             */
/*   Updated: 2022/03/13 17:14:30 by ccade            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3D.h"

int	ft_draw_3d(t_data *data)
{
	int	x;
	int	i;

	x = 0;
	while (x < data->p_info->screen_width)
	{
		ft_init_vectors(data, x);
		ft_init_dist(data);
		ft_dist_wall(data);
		perpwall(data);
		i = 0;
		while (i < data->p_coord->draw_start)
			my_pixel_put(data, x, i++, data->p_draw->c_color);
		i = 0;
		if (data->p_coord->draw_start + i < data->p_coord->draw_end)
			ft_draw_texture(data, x, data->p_coord->draw_end);
		while (data->p_coord->draw_end < data->p_info->screen_height)
			my_pixel_put(data, x, data->p_coord->draw_end++, \
		data->p_draw->f_color);
		x++;
	}
	return (0);
}
