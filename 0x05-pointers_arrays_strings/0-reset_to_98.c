#include "main.h"
#include <main.h>

/**
 * main - a pointer to check
 * Return 0
 */

void reset_to_98(int *n)
{
	int n = 98;
	*n = &n;
}

