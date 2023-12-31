#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searchs for any of a set of bytes
 *
 * @s: the string
 * @accept: the bytes
 *
 * Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
