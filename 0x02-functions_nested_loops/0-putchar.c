#include <stdio.h>
#include main.h
/**
* main - Entry point
* Description: print _putchar
* Return: Always 0 (success)
*/
int main(void)
{
	char word[] = "_putchar";
	int arr;
for (arr = 0; arr < 8; arr++)
putchar(word[arr]);
putchar('\n');
return (0);
}
