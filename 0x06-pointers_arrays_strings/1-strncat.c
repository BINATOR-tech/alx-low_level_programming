#include <stdio.h>
#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings.
 *
 *@dest: This is output dest
 *@src: This is the ouput source
 *@n: This is the number bytes fro src
 *
 * Return: This return dest, that concatenates two strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int n;

	/*Find the length of the dest string*/
	while (dest[dest_len] != '\0')
	{
	dest_len++;
	}

	/*Append src to the end of dest*/
	for (n = 0 ; n < n && src[n] != '\0' ; n++)
	{
	dest[dest_len + n] = src[n];
	}
	dest[dest_len + n] = '\0';

	/*Return pointer to destination string*/
	return (dest);
}
