#include "main.h"
/**
 * main - main function
 * Return: 0 Always
 */
int main(void)
{
	char *delim = " ", *str, *token;
	char **tokens = NULL;
	int y = 0, result;

	while (1)
	{
		printf("$ ");
		str = get_line();
		token = strtok(str, delim);
		y = 0;

		while (token)
		{
			tokens = realloc(tokens, (y + 1) * sizeof(char *));
			tokens[y] = token;
			y++;
			token = strtok(NULL, delim);
		}

		tokens = realloc(tokens, (y + 1) * sizeof(char *));
		tokens[y] = NULL;
		result = inbuilt(tokens);
		if (result == 0)
		{
			free(str);
			free(tokens);
			break;
		}
		else if (result == 2)
			forks(tokens);
		free(str);
	}
	return (0);
}
