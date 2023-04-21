#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * void print_all - check the code
 *@format: parametre
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *str;
	char *sep = "";

	va_start(ap, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(ap);
}
