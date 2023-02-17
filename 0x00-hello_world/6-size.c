#include <stdio.h>
/**
 * main - A program that prints sizes of various computer types
 *
 * Return 0 (Success)
 */
int main(void)
{
	char s;
	int i;
	long int h;
	long long int l;
	float e;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(s));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printif("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
return (0);
}
