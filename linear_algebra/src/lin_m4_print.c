/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lin_m4_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoskine <skoskine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 00:30:42 by jkoskela          #+#    #+#             */
/*   Updated: 2021/05/18 10:22:14 by skoskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/core.h"

void	lin_m4_print(const t_mat4 *src)
{
	print("|-----|-----|-----|-----|\n");
	print("|%-5.2lf|%-5.2lf|%-5.2lf|%-5.2lf|\n",
		  src->m[0], src->m[1], src->m[2], src->m[3]);
	print("|-----|-----|-----|-----|\n");
	print("|%-5.2lf|%-5.2lf|%-5.2lf|%-5.2lf|\n",
		  src->m[4], src->m[5], src->m[6], src->m[7]);
	print("|-----|-----|-----|-----|\n");
	print("|%-5.2lf|%-5.2lf|%-5.2lf|%-5.2lf|\n",
		  src->m[8], src->m[9], src->m[10], src->m[11]);
	print("|-----|-----|-----|-----|\n");
	print("|%-5.2lf|%-5.2lf|%-5.2lf|%-5.2lf|\n",
		  src->m[12], src->m[13], src->m[14], src->m[15]);
	print("|-----|-----|-----|-----|\n");
}
