#include <stdio.h>
/**
 * main -  Checking for sizes of variable on the computer
 *
 * Return = 0 (Success)
 */
int main(void)
{
	char s;
	int i;
	long int h;
	long long int l;
	float e;
printf("Size of a char is: %lu.\n", (unsigned long)sizeof(s));
printf("Size of an int is: %lu.\n", (unsigned long)sizeof(i));
printf("Size of a long int is: %lu.\n", (unsigned long)sizeof(h));
printf("Size of a long long int is: %\n", (unsigned long)sizeof(l));
printif("Size of a float is: %lu.\n", (unsigned long)sizeof(e));
return (0);
}
