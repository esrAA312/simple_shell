#include "hsh.h"
/**
 * _atoi - convert a string into an integer.
 * @x: the string to use.
 * Return: integer.
 */

int _atoi(char *x)
{
	int sign = 1, i = 0;
	unsigned int r = 0;

	while (!(x[i] <= '9' && x[i] >= '0') && x[i] != '\0')
	{
		if (x[i] == '-')
			sign *= -1;
		i++;
	}
	while (x[i] <= '9' && (x[i] >= '0' && x[i] != '\0'))
	{
		r = (r * 10) + (x[i] - '0');
		i++;
	}
	r *= sign;
	return (r);
}
/**
 * reverse - Reverses the characters in a character array.
 * @str: The character array to be reversed.
 * @length: The length of the character array.
 */

void reverse(char str[], int length)
{
	int st = 0;
	int end_l = length - 1;

	while (st < end_l)
	{
		char temp = str[st];

		str[st] = str[end_l];
		str[end_l] = temp;
		st++;
		end_l--;
	}
}


/**
 * it_oa - Convert an integer to a string
 * @num: The integer to be converted.
 * @str: Character array to store the resulting string.
 * @base: The base for the conversion .
 * Return: A pointer to the 'str' array,
 * which contains the string representation
 * of the input 'num' in the specified 'base'.
 */

char *it_oa(int num, char str[], int base)
{
	int z = 0;

	while (num != 0)
	{
		int rem = num % base;

		str[z++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num /= base;
	}

	str[z] = '\0';
	reverse(str, z);

	return (str);
}
