/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parr_read_file.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoskine <skoskine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 01:31:09 by jkoskela          #+#    #+#             */
/*   Updated: 2021/05/17 17:55:34 by skoskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/core.h"

ssize_t	parr_read_file(t_parray *dst, char *filename)
{
	char	*line;
	ssize_t	fd;
	ssize_t	ret;

	if (parr_null(dst))
		return (CR_FAIL);
	if (filename == NULL)
		return (CR_FAIL);
	fd = open(filename, O_RDONLY);
	if (!fd)
		return (CR_FAIL);
	line = NULL;
	ret = s_readline(fd, &line);
	while (ret)
	{
		if (!(parr_add_last(dst, line)))
			return (CR_FAIL);
		ret = s_readline(fd, &line);
	}
	close(fd);
	if (ret == -1)
		return (-1);
	else
		return (dst->len);
}

/*
**  ----------------------------------------------------------------------------
**
**	PARR_READ_FILE
**
**	Read each line of a file into an array. If filename is NULL, reads from
**	fd 0 (stdin).
**
**  ----------------------------------------------------------------------------
*/
