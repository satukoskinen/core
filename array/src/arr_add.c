/******************************************************************************
 *
 * \authors Julius Koskela
 *
 * \brief Add element to a specific index in a dynamic dstay.
 *
 * Add an element to an index passed as an argument. If index is out of bounds
 * returns 0.
 *
 * \param dst Destination array.
 * \param elem Element to be added.
 * \param index Index where element will be added.
 * \return 1 on success 0 on failure.
 *
 *****************************************************************************/

#include "../../inc/core.h"

ssize_t	arr_add(t_array *dst, void *elem, size_t index)
{
	uint8_t	*mem_pos;
	uint8_t	*mem_tmp;

	if (index >= dst->len)
		return (CR_FAIL);
	if (dst->len == dst->mem.size / dst->elem_size)
		core_realloc(&dst->mem, dst->mem.size * 2);
	mem_pos = dst->mem.data;
	mem_pos += index * dst->elem_size;
	mem_tmp = dst->mem.data;
	mem_tmp += (index + 1) * dst->elem_size;
	mem_move(mem_tmp, mem_pos, dst->elem_size * (dst->len - index));
	mem_cpy(mem_pos, elem, dst->elem_size);
	dst->len++;
	return (CR_SUCCESS);
}
