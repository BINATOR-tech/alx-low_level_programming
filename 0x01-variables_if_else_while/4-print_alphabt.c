
#include <stdio.h>

/**
 * main -  Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	/* your code goes there */
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j != 'q' && j != 'e')
		putchar(j);
	}
		putchar('\n');
		return (0);
}
