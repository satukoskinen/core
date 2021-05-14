/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parr_del_last.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoskine <skoskine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 01:31:09 by jkoskela          #+#    #+#             */
/*   Updated: 2021/05/14 18:43:44 by skoskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/parr.h"
#include "../../inc/core.h"

ssize_t	parr_del_last(t_parray *arr)
{
	if (!(parr_del(arr, arr->len - 1)))
		return (CR_FAIL);
	return (CR_SUCCESS);
}

/*
**  ----------------------------------------------------------------------------
**
**	PARR_DEL_LAST
**
**	Delete the last member from a dynamic array.
**
**  ----------------------------------------------------------------------------
*/
