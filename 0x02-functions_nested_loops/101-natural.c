#include <stdio.h>
#include <stdlib.h>
/**
*main - main block of code to be executed 
*Description: computes and print sum of all multiples of 3
*Return: 0
*/
int main(void)
{
int c = 0;
int sum = 0;
while (c < 1024)
{
if (c % 3 == 0 || c % 5 == 0)
{
sum += c;
}
c++;
}
printf("%i\n", sum);
return (0);
}
