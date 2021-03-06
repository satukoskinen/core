/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_csub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoskine <skoskine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:28:24 by jkoskela          #+#    #+#             */
/*   Updated: 2021/05/11 09:03:31 by skoskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cstr.h"

char	*s_csub(char *s, char c)
{
	char		*out;
	uint64_t	i;
	uint64_t	j;
	uint64_t	len;

	i = s_lenc(s, c) + 1;
	j = 0;
	len = s_len(s) - i;
	out = s_new(len + 1);
	while (s[i])
		out[j++] = s[i++];
	out[j] = '\0';
	return (out);
}

/*
**  ----------------------------------------------------------------------------
**
**	S_sub
**
**	Substring duplicate from; Duplicate contents of `s` starting from char `c`
**	until the end of `s`.
**
**	Return a memory allocated output `out`.
**
**  ----------------------------------------------------------------------------
*/
