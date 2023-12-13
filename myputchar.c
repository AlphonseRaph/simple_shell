#include "main.h"
/**
 * put_char - prints char
 *
 * @c: character
 *
 * Return: char
 */
int put_char(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
