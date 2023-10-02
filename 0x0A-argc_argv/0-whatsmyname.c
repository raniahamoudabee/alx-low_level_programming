#include <stdio.h>

/**
 * name - program that prints its name, followed by a new line
 * @aegc:input
 * @aegv:output
 *
 * RETURN: (0)
 */
int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", *argv[0]);
		return (0);
}
