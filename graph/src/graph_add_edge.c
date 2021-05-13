/******************************************************************************
 * \authors
 * \brief
 * \param
 * \return
 *****************************************************************************/

#include "../inc/graph.h"

ssize_t	graph_add_edge(
		t_graph *g,
		const char *u_key,
		const char *v_key,
		void *attr)
{
	t_graph_edge	e;
	t_graph_node	*u;
	t_graph_node	*v;

	u = graph_find_node(g, u_key);
	v = graph_find_node(g, v_key);
	if (!u || !v)
	{
		printf("Trying to connect an edge with a non-existing node!\n");
		return (-1);
	}
	e.u = u;
	e.v = v;
	e.valid = 1;
	e.attr = attr;
	arr_add_last(&u->out, &e);
	arr_add_last(&v->in, &e);
	return (CR_SUCCESS);
}
