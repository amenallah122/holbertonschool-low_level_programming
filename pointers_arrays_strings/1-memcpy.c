#include "main.h"
/**
 * _memcpy - Copies memory area
 *
 * @dest: destination
 * @n: the number of bytes
 * @src: source
 *
 * Return: a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
