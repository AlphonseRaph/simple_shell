#include "main.h"
/**
 * _strncmp - compare string
 *
 * @s1: string one
 * @s2: string two
 *
 * @n: size to compare
 *
 * Return: 0 always
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 0;

	while (i < n && *s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}
