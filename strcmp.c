#include "main.h"
/**
 * _strcmp - compare strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: integer
 */

int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 != '\0')
	{
		return (-(*s2));
	}
	else if (*s1 != '\0' && *s2 == '\0')
	{
		return (*s1);
	}

	return (0);
}
