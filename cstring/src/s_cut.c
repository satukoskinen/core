/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_cut.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoskine <skoskine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 17:27:21 by jkoskela          #+#    #+#             */
/*   Updated: 2021/05/11 09:03:37 by skoskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cstr.h"

char	*s_cut(char *s, size_t size)
{
	if (size < s_len(s))
		s[size] = '\0';
	return (s);
}

/*
**  ----------------------------------------------------------------------------
**
**	S_cut
**
**	Cut string `s` at position size.
**
**  ----------------------------------------------------------------------------
*/
