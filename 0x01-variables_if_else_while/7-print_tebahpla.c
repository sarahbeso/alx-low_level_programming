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
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
