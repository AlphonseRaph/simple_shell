#include "main.h"
/**
 * forks - forks command
 *
 * @tokens: command
 *
 * Return: integers
 *
 */
int forks(char **tokens)
{
	pid_t pid;
	int status;
	char *pathname = "/bin/ls";
	char b[20] = "/bin/";
	char *bc = _strcat(b, tokens[0]);
	char *env;

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		return (1);
	}
	if (pid == 0)
	{
		_setenv(pathname, bc, 1);
		env = _getenv(pathname);
		if (env != NULL)
		{
			execve(env, tokens, NULL);
		}
		perror("execve");
		exit(1);
	}
	else
	{
		wait(&status);
	}
	return (1);
}
