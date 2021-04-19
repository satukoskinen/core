/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_cdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:27:56 by jkoskela          #+#    #+#             */
/*   Updated: 2021/04/15 23:45:05 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/str.h"

char			*s_cdup(const char *s1, char c)
{
	char		*out;
	uint64_t	i;

	i = 0;
	out = (char *)malloc(sizeof(char) * s_lenc((char *)s1, c) + 1);
	if (out == NULL)
		return (NULL);
	while (s1[i] && s1[i] != c)
	{
		out[i] = s1[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

/*
**  ----------------------------------------------------------------------------
**
**	S_cdup
**
**	String duplicate (c); duplicate contents from outing `s1` until
**	delimiting character `c`.
**
**	Returns a memory allocated output `out`.
**
**  ----------------------------------------------------------------------------
*/
