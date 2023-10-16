#include "main.h"

/**
 * _printfint - function that print int
 * @i:type of inputs
 * @j:type of inputs
 * Return: j
 **/

int _printfint(int i, int j)
{
	if (i < 0)
	{
		_putchar('-');
		_putchar('0' + i);
	}
	else if (i != 0)
	{
		_printfint(i / 10, j);
		_putchar('0' + i % 10);
	}

	j = j + 1;
	return (j);
}

/**
 * _printfint_double - function that print d
 * @i:type of inputs
 * @j:type of inputs
 * @c:type of inputs
 * Return: j
 **/

int _printfint_double(char c, int i, int j)
{
	if (c == 'i' || c == 'd')
	{
		if (i == 0)
		{
			_putchar('0');
		}
		else
			_printfint(i, j);
		return (j);
	}
	else
		return (-1);
	return (j);
}
