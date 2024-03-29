#include "main.h"

/**
 * _printfint - function that print int
 * @i:type of inputs
 * @j:type of inputs
 * Return: j
 **/

int _printfint(long int i, int j)
{
	if (i < 0)
	{
		_putchar('-');
		j = j + 1;
		j = _printfint(-(i), j);
		return (j);
	}
	else if (i != 0)
	{
		j = _printfint(i / 10, j);
		_putchar('0' + i % 10);
		j = j + 1;
		return (j);
	}
	return (j);
}

/**
 * _printfint_double - function that print d
 * @i:type of inputs
 * @j:type of inputs
 * @c:type of inputs
 * Return: j
 **/

int _printfint_double(char c, long int i, int j)
{
	if (c == 'i' || c == 'd')
	{
		j = _printfint(i, j);
		return (j);
	}
	else
	{
		j = -1;
		return (j);
	}
}
