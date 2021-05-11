/******************************************************************************
 *
 * \authors Satu Koskinen
 *
 * \brief
 *
 *****************************************************************************/

#include "../../inc/core.h"
#include "../inc/print_internal.h"

size_t	add_number(t_data *specs, char *number, char *result)
{
	size_t	i;

	i = 0;
	if (specs->is_negative)
		number++;
	while (number[i])
	{
		result[i] = number[i];
		i++;
	}
	return (i);
}

size_t	add_padding(size_t len, char c, char *result)
{
	size_t	i;

	i = 0;
	while (i < len)
		result[i++] = c;
	return (i);
}

size_t	add_prefix(t_data *specs, char *result)
{
	size_t	i;

	i = 0;
	if (specs->is_negative)
		result[i++] = '-';
	else if (s_chr("difF", specs->conversion)
		&& (specs->blank_signed || specs->plus_signed))
	{
		if (specs->plus_signed)
			result[i++] = '+';
		else
			result[i++] = ' ';
	}
	else if (specs->conversion == 'x' && specs->alt_form && !specs->is_zero)
	{
		result[i++] = '0';
		result[i++] = 'x';
	}
	else if (specs->conversion == 'X' && specs->alt_form && !specs->is_zero)
	{
		result[i++] = '0';
		result[i++] = 'X';
	}
	return (i);
}

char	*parse_int_result(t_data *specs, char *number, size_t result_len)
{
	char	*result;
	size_t	i;

	result = (char *)malloc(sizeof(char) * (result_len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	if (specs->min_field_width > 0 && !specs->zero_padding
		&& !specs->neg_field_width)
		i += add_padding(specs->min_field_width, ' ', &result[i]);
	i += add_prefix(specs, &result[i]);
	if (specs->min_field_width > 0 && specs->zero_padding
		&& !specs->neg_field_width)
		i += add_padding(specs->min_field_width, '0', &result[i]);
	if (specs->precision > 0)
		i += add_padding(specs->precision, '0', &result[i]);
	if (!(specs->zero_precision && specs->is_zero))
		i += add_number(specs, number, &result[i]);
	if (specs->min_field_width > 0 && specs->neg_field_width)
		i += add_padding(specs->min_field_width, ' ', &result[i]);
	result[i] = '\0';
	return (result);
}
