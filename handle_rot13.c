#include "main.h"
/**
 * handle_rot13 - encodes string using rot13 algorithm
 * @s: the string to be encoded
 * @n_print: the printing count
 * Return: encouded words
 */


void handle_rot13(char *s, int *n_print)
{
	int i, j;
	char *encoded = s;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				encoded[i] = b[j];
				break;
			}
		}
	}

	handle_string(encoded, n_print);

}
