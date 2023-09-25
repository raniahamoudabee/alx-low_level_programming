#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 * @n: the address of memory to print
 * @dest: the size of the memory to print
 * @src:to memory area
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	int i, j;

	for (i = 0; i < n; i++)
	dest[i] = src;
	return (dest);
}
