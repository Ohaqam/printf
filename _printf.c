#include "main.h"
/**
 * _printf - function that print output
 * @format:type of inputs
 *
 * Return: 0
 **/

int _printf(const char *format, ...)
{
	va_list args;
	char buffer[1024];
	int i = 0;
	int buffer_index = 0;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				buffer[buffer_index++] = (char)va_arg(args, int);
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
						str = "(nil)";
					while (*str)
						buffer[buffer_index++] = *str++;
				}
				break;
		}
		if ((format[i] == 'c' || format[i] == 's') && format[i + 1] != '\0')
		{
			buffer[buffer_index++] = ',';
			buffer[buffer_index++] = ' ';
		}
		i++;
	}

	buffer[buffer_index] = '\0';

	for (int j = 0; buffer[j] != '\0'; j++)
		putchar(buffer[j]);
	va_end(args);
	return (0);
}

