/******************************************************************************
 * \brief Find all root nodes from a directed graph.
 * \param g Source graph.
 * \param roots An array to store the root nodes.
 * \return 1 on success 0 on failure.
 *****************************************************************************/
#include "../inc/graph.h"

ssize_t	graph_find_roots(t_graph *g, t_array *roots)
{
	t_map_node		m_node;
	t_graph_node	*g_node;
	size_t			i;

	i = 0;
	while (i < g->data.count)
	{
		m_node = g->data.node[i];
		if (!map_null_node(&m_node))
		{
			g_node = (t_graph_node *)m_node.data;
			if (g_node->in.len == 0)
				arr_add_last(roots, g_node);
		}
		i++;
	}
	if (roots->len)
		return (CR_SUCCESS);
	return (CR_FAIL);
}
