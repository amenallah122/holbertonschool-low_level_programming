#include "main.h"
#include <stddef.h>
/**
* _strstr - locates a substring
*
* @haystack: string
* @needle: substring
* Return: a pointer
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (needle);
	}
	return (NULL);
}
