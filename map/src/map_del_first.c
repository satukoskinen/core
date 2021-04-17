/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_del_first.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 01:31:09 by jkoskela          #+#    #+#             */
/*   Updated: 2021/04/14 16:23:10 by julius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/map.h"

int				map_del_first(t_map *arr)
{
	if (!(map_del(arr, 0)))
		return (MAP_FAIL);
	return (MAP_SUCCESS);
}

/*
**  ----------------------------------------------------------------------------
**
**	MAP_DEL_FIRST
**
**	Delete the first member from a dynamic array.
**
**  ----------------------------------------------------------------------------
*/
