#include "main.h"

/**
 * rev_string - main block
 * @s: parameter
 */
void rev_string(char *s)
{
		int i = 0, a, b;
		char c;

		while (*(s + i) != '\0')
		{
			i++;
		}
		b = i;
		i--;
		for (a = 0; a < b / 2; a++)
		{
			c = *(s + a);
			*(s + a) = *(s + i);
			*(s + i) = c;
			i--;
		}
}
