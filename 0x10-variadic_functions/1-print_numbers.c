#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - sum all the sum
 * @n: number of parameters
 * @separator: what to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int number;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(arg, int);
		if (separator == NULL || i == (n - 1))
		{
			printf("%d", number);
		}
		else
		{
			printf("%d%s",  number, separator);
		}
	}
	printf("\n");
	va_end(arg);
}
