#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all string
 * @n: number of parameters
 * @separator: what to be printed between numbers
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i;
	char *number;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(arg, char*);
		if (number == NULL)
		{
			printf("(nil)");
		}
		else if (separator == NULL || i == (n - 1))
		{
			printf("%s", number);
		}
		else
		{
			printf("%s%s",  number, separator);
		}
	}
	printf("\n");
	va_end(arg);
}
