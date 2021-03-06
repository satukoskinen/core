/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parr_find.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoskine <skoskine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 01:31:09 by jkoskela          #+#    #+#             */
/*   Updated: 2021/05/17 17:55:34 by skoskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/core.h"

void	*parr_find(t_parray *src, void *key, void *(*f)(void *, void *))
{
	void	*data;
	size_t	i;

	i = 0;
	data = NULL;
	if (parr_null(src))
		return (CR_FAIL);
	while (1)
	{
		if (i == src->len)
			break ;
		data = parr_get(src, i);
		data = f(key, data);
		if (data)
			return (data);
		i++;
	}
	return (NULL);
}

/*
**  ----------------------------------------------------------------------------
**
**	PARR_FIND
**
**	Search from an array by passing a key and a selection function. In the
**	selection function user can put any logic and anything returned from
**	the selection function is returned as a void pointer.
**
**  ----------------------------------------------------------------------------
*/
