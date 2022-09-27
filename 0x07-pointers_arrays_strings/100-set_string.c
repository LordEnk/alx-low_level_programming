#include "main.h"

/**
 * set_string - sets pointer to char
 * @s: pointer parameter to change
 * @to: string parameter to change pointer to
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
