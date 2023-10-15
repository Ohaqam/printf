#include "main.h"

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
		{
			_putchar(format[i]);
			j++;
			i++;
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				putchar('%');
				j++;
				i++;
			}
			else if (format[i + 1] == 'c')
			{
				char c = (char)va_arg(args, int);

				_putchar(c);
				j++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				char *str = va_arg(args, char *);

				if (str == NULL)
					str = "(nil)";
				while (*str)
				{
					_putchar(*str);
					j++;
					str++;
				}
				i++;
			}
		}
		i++;
	}

	va_end(args);
	return (j);
}

