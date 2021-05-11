/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_dgr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoskine <skoskine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 02:01:12 by jkoskela          #+#    #+#             */
/*   Updated: 2021/05/11 09:30:11 by skoskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/core.h"

double	math_dgr(double rad)
{
	return (rad / (CR_PI / 180));
}

/*
**  ----------------------------------------------------------------------------
**
**	math__dgr
**
**	Convert radians to degrees.
**
**  ----------------------------------------------------------------------------
*/
