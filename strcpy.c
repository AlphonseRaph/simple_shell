#include "main.h"
/**
 * str_cpy - copies strings
 *
 * @dest: destination
 * @src: source
 *
 * Return: copied string
 */

char *str_cpy(char *dest, const char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
