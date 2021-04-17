/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_del_last.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 01:31:09 by jkoskela          #+#    #+#             */
/*   Updated: 2021/04/14 16:23:35 by julius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/map.h"

int				map_del_last(t_map *arr)
{
	if (!(map_del(arr, arr->len - 1)))
		return (MAP_FAIL);
	return (MAP_SUCCESS);
}

/*
**  ----------------------------------------------------------------------------
**
**	MAP_DEL_LAST
**
**	Delete the last member from a dynamic array.
**
**  ----------------------------------------------------------------------------
*/
