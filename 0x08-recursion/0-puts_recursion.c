#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: string
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	puts("\n");
}
