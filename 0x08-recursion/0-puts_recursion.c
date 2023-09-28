#include "main.h"

/**
 * _puts_recursion - check the code
 *
 * @s:input
 *
 * Return: man puts.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_ptuchar(*s);
		_puts_recursion(s + 1);
	}
}
