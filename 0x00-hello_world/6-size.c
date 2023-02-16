#include <stdio.h>
/**
 * main -  Checking for sizes of variable on the computer
 *
 * Return = 0 (Success)
 */
int main(void)
{
printf("Size of a char is: %lu.\n", sizeof (char));
printf("Size of an int is: %lu.\n", sizeof (int));
printf("Size of a long int is: %lu.\n", sizeof (long int));
printf("Size of a long long int is: %\n", sizeof (long long int));
printif("Size of a float is: %lu.\n", sizeof (float));
return (0);
}
