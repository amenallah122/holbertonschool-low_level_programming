#include "main.h"

/**
  * cap_string - capitalizes string
  * @s: string
  *
  * Return: string
  */
char *cap_string(char *s)
{
	int a = 0, i;
	int b = 13;
	char c[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < b)
		{
			if ((a == 0 || s[a - 1] == c[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
