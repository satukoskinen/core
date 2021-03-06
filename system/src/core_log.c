#include "../../inc/core.h"
#include "../inc/system_internal.h"

ssize_t	print_line(void *data, size_t i)
{
	char	*str;

	str = data;
	print("%s\n", str);
	return (i);
}

ssize_t	print_tracker(void *data, size_t i)
{
	t_tracker *tracker;

	tracker = data;
	if (tracker->mem.data)
	{
		print("memptr: \033[1;31m%p\033[0m\n", tracker->mem.data);
		print("memsize: \033[1;31m%lu\033[0m\n", tracker->mem.size);
	}
	if (!(parr_null(&tracker->trace)))
		parr_iter(&tracker->trace, print_line);
	print("\n");
	return (i);
}

ssize_t	print_error(void *data, size_t i)
{
	t_error *error;

	error = data;
	if (error->message)
		print("%s\n", error->message);
	if (!(parr_null(&error->trace)))
		parr_iter(&error->trace, print_line);
	print("\n");
	return (i);
}

void	core_log()
{
	t_core	*core;

	core = core_static();
	if (core->track_errors == true)
		parr_iter(&core->errors, print_error);
	if (core->track_allocs == true)
		parr_iter(&core->allocs, print_tracker);
}
