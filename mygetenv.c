#include "main.h"
/**
 * _getenv - gets environ variables
 *
 * @name: environ variable
 *
 * Return: pointer to environ variable
 */
char *_getenv(const char *name)
{
	int i = 0;

	for (; environ[i] != NULL; i++)
	{
		if (_strncmp(name, environ[i], str_len(name)) == 0)
		{
			return (environ[i] + str_len(name) + 1);
		}
	}
	return (NULL);
}
