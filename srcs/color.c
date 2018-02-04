/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 14:19:35 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/12/16 16:41:36 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

inline int	ft_color(t_vec3 color)
{
	int r;
	int g;
	int b;
	int result;

	r = color.x <= 0 ? 0 : (int)color.x * 255;
	g = color.y <= 0 ? 0 : (int)color.y * 255;
	b = color.z <= 0 ? 0 : (int)color.z * 255;
	r = color.x >= 1 ? 255 : (int)color.x * 255;
	g = color.y >= 1 ? 255 : (int)color.y * 255;
	b = color.z >= 1 ? 255 : (int)color.z * 255;
	result = 0;
	result += r << 16;
	result += g << 8;
	result += b;
	return (result);
}