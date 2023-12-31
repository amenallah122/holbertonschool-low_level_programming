#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: The destination
 * @src: The source
 * @n: The limit of the concatenation
 *
 * Return: A pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}

	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i + n + 1] = '\0';

	return (dest);
}
