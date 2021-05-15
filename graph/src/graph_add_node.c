/******************************************************************************
 * \brief Add a node n to graph g.
 *
 * New adjacency lists in and out are created for the node, after which the
 * node is added into the graph.
 *
 * \param g Source graph.
 * \param n Node to be added.
 * \return Total amount of nodes in the graph on success or -1 on failure.
 *****************************************************************************/

#include "../inc/graph.h"

ssize_t	graph_add_node(t_graph *g, const char *key, void *attr)
{
	t_graph_node	*n;

	n = (t_graph_node *)malloc(sizeof(t_graph_node));
	if (!n)
	{
		printf("Allocation failed in function: graph_add_node!\n");
		exit(-1);
	}
	n->key = key;
	n->valid = true;
	n->in = parr_new(1);
	n->out = parr_new(1);
	n->attr = attr;
	return (map_add(g, n, n->key));
}
