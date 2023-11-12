#include "hsh.h"
/**
 * _strncmp - This program compares the first n characters of two strings.
 *@str1:First string to be competed.
 *@str2: Second string to be competed.
 * @n: Number of characters to compare.
 *Return: negative, positive or zero integer.
 */

int _strncmp(char *str1, char *str2, int n)
{ int i, diff;

	for (i = 0; i < n; i++)
	{
		diff = str1[i] - str2[i];
		if (diff > 0 || diff < 0)
			return (diff); }
	return (0);
}
