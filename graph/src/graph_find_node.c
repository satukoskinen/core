/******************************************************************************
 * \authors Julius Koskela
 * \brief Find node from a graph by id.
 * \param g Source graph.
 * \param id Id to be matched.
 * \return Pointer to the node if a node is found, NULL otherwise.
 *****************************************************************************/
#include "../inc/graph.h"

t_graph_node	*graph_find_node(t_graph *g, const char *key)
{
	t_graph_node	*tmp;

	tmp = map_get(&g->data, key);
	return (tmp);
}
