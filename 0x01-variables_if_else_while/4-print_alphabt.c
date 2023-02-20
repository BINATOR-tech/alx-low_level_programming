#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	/* your code goes there */
	char j;

	for (j = 'a'; j <= 'z'; j++)
		if (j != 'q' && j != 'e')
		putchar(j);
		putchar('\n');
		return (0);
}
