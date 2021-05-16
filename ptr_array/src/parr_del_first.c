/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parr_del_first.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 01:31:09 by jkoskela          #+#    #+#             */
/*   Updated: 2021/05/17 02:28:23 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../inc/core.h"

ssize_t	parr_del_first(t_parray *arr)
{
	if (!(parr_del(arr, 0)))
		return (CR_FAIL);
	return (CR_SUCCESS);
}

/*
**  ----------------------------------------------------------------------------
**
**	PARR_DEL_FIRST
**
**	Delete the first member from a dynamic array.
**
**  ----------------------------------------------------------------------------
*/
