/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_intlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoskine <skoskine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 04:22:26 by jkoskela          #+#    #+#             */
/*   Updated: 2021/05/11 09:30:11 by skoskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/core.h"

int	math_intlen(int64_t n)
{
	int		res;

	res = 1;
	if (n < 0)
		n = n * -1;
	while (n > 9)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

/*
**  ----------------------------------------------------------------------------
**
**	math_intlen
**
**	Calculate the lenght of an integer in base 10.
**
**  ----------------------------------------------------------------------------
*/
