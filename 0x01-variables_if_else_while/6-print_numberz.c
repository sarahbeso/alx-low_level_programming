#include <stdio.h>
/**
* main - Entry point
 * Description: print all alphabet letter
 * Return: 0 (success)
 */
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + '0');
digit++;
}
printf("\n");
return (0);
}
