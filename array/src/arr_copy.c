/******************************************************************************
 *
 * \authors Julius Koskela
 *
 * \brief Copy elements from src to dst.
 *
 * Checks that element sizes match between the arrays and copies from src to
 * dst. Overrides any data in dst.
 *
 * \param dst Destination array.
 * \param src Source array.
 * \return 1 on success 0 on failure.
 *
 *****************************************************************************/

#include "../../inc/core.h"

ssize_t	arr_copy(t_array *dst, t_array *src)
{
	uint8_t	*mem_start;

	if (arr_null(src))
		return (CR_FAIL);
	if (dst->mem.size / dst->elem_size < src->len)
		core_realloc(&dst->mem, dst->mem.size * 2);
	mem_start = dst->mem.data;
	dst->mem.data = mem_cpy(
			mem_start,
			src->mem.data,
			src->len * src->elem_size);
	dst->len = src->len;
	return (CR_SUCCESS);
}
