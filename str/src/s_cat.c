/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_cat.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:27:51 by jkoskela          #+#    #+#             */
/*   Updated: 2021/04/15 23:45:05 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/str.h"

char		*s_cat(char *s1, const char *s2)
{
	char	*dst;
	char	*src;

	dst = s1;
	src = (char *)s2;
	while (*dst)
		dst++;
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (s1);
}

/*
**  ----------------------------------------------------------------------------
**
**	S_cat
**
**	The string catenate function appends a copy of the null-terminated
**	string s2 to the end of the null-terminated string s1, then adds a
**	terminating `\0'. The string s1 must have sufficient space to hold
**	the result.
**
**  ----------------------------------------------------------------------------
*/
