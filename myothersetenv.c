#include "main.h"
/**
 * _setenv - sets an environment variable
 * @name: variable name
 * @value: value name
 * @overwrite: overwrite value if it already exists
 * Return: 0 on success, -1 on failure
 */
int _setenv(const char *name, const char *value, int overwrite)
{
	int size = 0, i;
	size_t name_len, value_len, total_len;
	char *new_entry;
	char **new_environ;

	while (environ[size] != NULL)
		size++;
	name_len = str_len(name);
	value_len = str_len(value);
	total_len = name_len + value_len + 2;
	new_environ = malloc((size + 2) * sizeof(char *));
	if (new_environ == NULL)
	{
		perror("malloc");
		return (-1);
	}
	new_entry = malloc(total_len);
	if (new_entry == NULL)
	{
		perror("malloc");
		free(new_environ);
		return (-1);
	}

	for (i = 0; i < size; ++i)
	new_environ[i] = environ[i];

	str_cpy(new_entry, name);
	new_entry[name_len] = '=';
	str_cpy(new_entry + name_len + 1, value);

	if (overwrite || _getenv(name) == NULL)
		new_environ[size++] = new_entry;
	else
		free(new_entry);
	new_environ[size] = NULL;
	environ = new_environ;
	return (0);
}

