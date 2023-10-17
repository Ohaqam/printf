#include "main.h"

/**
 * _printfcharc - function that print output
 * @c:type of inputs
 * @j:type of inputs
 *
 * Return: j.
 **/

int _printfcharc(char c, int j)
{
	if (c == '\0')
		return (-1);
	else
	{
		_putchar(c);
		j = j + 1;
		return (j);
	}
}

/**
 * _printfstr - function that print output
 * @str:type of inputs
 * @j:type of inputs
 *
 * Return: j.
 **/

int _printfstr(char *str, int j)
{
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		_putchar(*str);
		j++;
		str++;
	}
	return (j);
}

/**
 * _printf - function that print output
 * @format:type of inputs
 *
 * Return: 0.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			j = _printfcharc(format[i], j);
		else if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				j = _printfcharc(format[i], j);
				i++;
			}
			else if (format[i + 1] == 'c')
			{
				j = _printfcharc((char)va_arg(args, int), j);
				i++;
			}
			else if (format[i + 1] == 's')
			{
				j = _printfstr(va_arg(args, char *), j);
				i++;
			}
			else
			{
				j = _printfint_double(format[i + 1], va_arg(args, int), j);
				i++;
			}
		}
		i++;
	}
	va_end(args);
	return (j);
}

