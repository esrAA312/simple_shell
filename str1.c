#include "hsh.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - function that prints a string to stdout
 *
 * @str: char pointer variable
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}

/**
 * _strcmp - function that compares two strings
 *
 * @str1: char pointer variable
 * @str2: char pointer variable
 *
 * Return: an integer for the exit status
 */

int _strcmp(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
	}

	return (0);
}

/**
 * _strlen - A function to return the length of a string
 *
 * @s: input character
 *
 * Return: int length of a string
 */

int _strlen(char *s)
{
	int nu;

	for (nu = 0 ; *s != '\0' ; s++)
	{
		++nu;
	}
	return (nu);
}
