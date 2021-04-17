/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_take.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 06:09:12 by jkoskela          #+#    #+#             */
/*   Updated: 2021/04/17 12:35:12 by julius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/arr.h"

void			*arr_take(void *dst, t_arr *src, size_t index)
{
	void		*tmp;

	if (index > src->count || arr_null(src))
		return (NULL);
	tmp = arr_get(src, index);
	dst = mem_cpy(dst, tmp, src->memsize);
	if (!(arr_del(src, index)))
		return (NULL);
	return (dst);
}

/*
**  ----------------------------------------------------------------------------
**
**	ARR_TAKE
**
**	Take a member from the array. Contrary to get, take also
**	removes the member from the array. For this same reason it takes as the
**	first argument a pointer to an allocated memory sufficient to hold
**	src->memsize amount of data.
**
**  ----------------------------------------------------------------------------
*/
