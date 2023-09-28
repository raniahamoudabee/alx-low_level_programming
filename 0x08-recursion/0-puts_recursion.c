#include "main.h"

/**
 * _puts_recursion - check the code
 *
 * @s: string
 *
 * Return: man puts.
 *
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		++i;
		_putchar('\n');
	}
	else
	{
		_ptuchar(*s);
		_puts_recursion(s);
	}
}
