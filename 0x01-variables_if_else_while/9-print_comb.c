#include <stdio.h>
/**
* main - Entry point
* Description: print numbers of base in lowercase
* Return: Always 0 (success)
*/
int main(void)
{
int numbers = 0;
{
while (numbers <= 9)
{
putchar(numbers + 48);
if (numbers != 9)
{
putchar(',');
putchar(' ');
}
numbers++;
}
putchar('\n');
return (0);
}
