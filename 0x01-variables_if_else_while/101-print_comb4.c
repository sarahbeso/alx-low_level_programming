

#include <stdio.h>
/**
* main - Entry point
* Description: print all possible combinations of two digits.
* Return: Always 0 (success)
*/
int main(void)
{
int n1 = 0;
int n2, n3;
while (n1 <= 9)
{
n2 = 0;
while (n2 <= 9)
{
n3 = 0;
while (n3 <= 9)
{
if (n1 != n2 &&
n1 < n2 &&
n2 != n3 &&
n2 < n3)
{
putchar(n1 + 48);
putchar(n2 + 48);
putchar(n3 + 48);
if (n1 + n2 + n3 != 24)
{
putchar(',');
putchar(' ');
}
}
n3++;
}
n2++;
}
n1++;
}
putchar('\n');
return (0);
}
