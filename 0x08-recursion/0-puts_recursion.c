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

	if (*s == '\0')
	{
		++i;
		_putchar('\n');
			return;
	}
	else
	{
		_ptuchar(*s);
		_puts_recursion(s + 1);
	}
}
