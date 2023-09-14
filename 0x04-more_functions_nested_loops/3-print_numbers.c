#include "main.h"
#include <stdio.h>
/**
*print_numbers - function that print all numbers from
*0 to 9
*
*Return: returns nothing
*/
void print_numbers(void)
{
	int c;
for(c = '0';c <= '9'; c++)
	{
	printf("%d", c);
	}
	_putchar('\n');
}
