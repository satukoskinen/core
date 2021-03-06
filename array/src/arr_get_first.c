/******************************************************************************
 *
 * \authors Julius Koskela
 *
 * \brief Get a pointer to the first element in the array.
 *
 * Does not copy the element, pointer points directly to the memory in the
 * array so be careful.
 *
 * \param src Source array.
 *
 * \return Pointer to an element or NULL if no element is found.
 *
 *****************************************************************************/

#include "../../inc/core.h"

void	*arr_get_first(t_array *arr)
{
	return (arr_get(arr, 0));
}
