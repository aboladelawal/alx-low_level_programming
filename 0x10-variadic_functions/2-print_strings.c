#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - variadic function that print string
 * @separator: the string to be printed from main
 * @n: the number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *p;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(arg, char*);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (separator == NULL || i == n - 1)
			continue;
		else
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
