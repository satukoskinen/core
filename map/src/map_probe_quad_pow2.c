#include "../inc/map.h"

uint64_t	map_probe_quad_pow2(uint64_t x)
{
	return ((pow(x, 2) + x) / 2);
}
