#include <stdio.h>

/**
 * main: prints a number followed by a nee line.
 * @argc: number of arguments count.
 * @argv: an array of pointers.
 *
 * return: always O.
 */
int main(int __attribute((__unused__)) argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return(0);
}
