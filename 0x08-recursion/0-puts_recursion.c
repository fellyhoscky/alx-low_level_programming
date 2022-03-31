#include "main.h"
/**
 * _puts_recursion print strings followed by a new line
 * @s: point to the string
 * Return void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		-puts_recursion(s + 1);
	}
}

