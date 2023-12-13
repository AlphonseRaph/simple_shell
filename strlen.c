#include "main.h"
/**
 * str_len - get length of string
 *
 * @s:syring
 *
 * Return: length of string
 */

int str_len(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
