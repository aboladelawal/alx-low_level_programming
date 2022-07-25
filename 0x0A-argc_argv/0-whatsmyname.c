#include <stdio.h>

/**
* main - function that printsits name followed by a new line
* @argc: offset count of the argument
* @argv: offset value of the argument
* Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
