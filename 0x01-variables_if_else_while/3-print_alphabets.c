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
char CH = 'A';
while (ch <= 'z')

{putchar(ch);
ch++;
}
while (CH <= 'Z')
{
putchar (CH);
CH++;
}
putchar('\n');
return (0);

}
