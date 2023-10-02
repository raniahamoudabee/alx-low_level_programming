#include "main.h"

/**
 * *_memset - function that fills memory with a constant b
 * @b: the address of memory to print
 * @s: the size of the memory to print
 * @n: function fills the first.
 *
 * Return: s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
