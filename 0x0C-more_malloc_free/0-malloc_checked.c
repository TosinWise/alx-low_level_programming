#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked  : allocate memory using malloc.
 * @b: function int parameter.
 *
 * return: void.
 */
void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
