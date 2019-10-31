/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 12:44:11 by ncolomer          #+#    #+#             */
/*   Updated: 2019/10/31 14:42:24 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "engine/engine.h"
# include "config/config.h"

typedef	struct	s_game
{
	t_config	*config;
	t_window	*window;
	t_camera	*camera;
}				t_game;

t_game			*new_game(void);

int				mouse_event(int button, int x, int y, t_game *game);

int				main_loop(t_game *game);

#endif
