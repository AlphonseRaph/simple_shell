#include "main.h"
/**
 * inbuilt - execute commmands
 * @tokens: commands
 * Return: 1 on success
 */
int inbuilt(char **tokens)
{
	char **env = environ;
	const char *new_dir;
	char *cv;

	if (_strcmp(tokens[0], "exit") == 0)
		return (0);
	else if (_strcmp(tokens[0], "cd") == 0)
	{
		new_dir = tokens[1];
		if (new_dir == NULL)
		{
			perror("new_dir");
			return (1);
		}
		if (chdir(new_dir) != 0)
		{
			perror("chdir");
			return (1);
		}
	}
	else if (_strcmp(tokens[0], "env") == 0)
	{
		while (*env != NULL)
		{
			cv = *env;
			while (*cv != '\0')
			{
				put_char(*cv);
				cv++;
			}
			put_char('\n');
			env++;

		}
	}
	else
	{
		return (2);
	}
	return (1);
}
