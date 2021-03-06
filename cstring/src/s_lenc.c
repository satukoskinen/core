/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_lenc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoskine <skoskine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 03:01:24 by jkoskela          #+#    #+#             */
/*   Updated: 2021/05/11 09:04:47 by skoskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cstr.h"

int	s_lenc(char *s, char c)
{
	uint64_t	i;

	i = 0;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

/*
**  ----------------------------------------------------------------------------
**
**	S_lenc
**
**	String lenght (c); returns the lenght until the first occurence of `c` in
**	the null terminated string `s` or 0 if c doesn't occur.
**
**  ----------------------------------------------------------------------------
*/
