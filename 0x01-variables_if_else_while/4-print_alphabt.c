#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry point
 * Description: print all alphabet letter
 * Return: 0 (success)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
ch++;
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
