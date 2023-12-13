#include "main.h"
/**
 * get_line - get line from stdin
 *
 * Return: line
 */
char *get_line(void)
{
	size_t n = 0;
	char *lineptr = NULL;

	getline(&lineptr, &n, stdin);
	if (lineptr[str_len(lineptr) - 1] == '\n')
	{
		lineptr[str_len(lineptr) - 1] = '\0';
	}

	return (lineptr);
}
