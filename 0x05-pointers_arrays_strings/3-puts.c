#include "main.h"
#include <unistd.h>

/**
 *_puts - this function prints a string, to stdout
 *@str: this is the value to be evaluated.
 *Return: not.
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
