#include "main.h"
/**
 * _strcat - concatenate string
 *
 * @dest: destination
 * @src: source
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, const char *src)
{
	int x = 0;
	int i = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[i] != '\0')
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
