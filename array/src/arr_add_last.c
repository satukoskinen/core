/******************************************************************************
 *
 * \authors Julius Koskela
 *
 * \brief Add a new element to the end of a dynamic array.
 *
 * If the array is not sufficiently big a new memory area double the
 * alloc_size of the previous one is allocated.
 *
 * \param dst Destination array.
 * \param elem Element to be added.
 * \return 1 on success 0 on failure.
 *
 *****************************************************************************/

#include "../../inc/core.h"

ssize_t	arr_add_last(t_array *dst, void *elem)
{
	uint8_t	*mem_pos;

	if (dst->len == dst->mem.size / dst->elem_size)
		core_realloc(&dst->mem, dst->mem.size * 2);
	mem_pos = dst->mem.data;
	mem_pos += dst->len * dst->elem_size;
	mem_pos = mem_cpy(mem_pos, elem, dst->elem_size);
	dst->len++;
	return (CR_SUCCESS);
}
