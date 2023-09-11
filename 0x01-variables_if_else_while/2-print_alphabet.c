#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry point
 * Description: print all alphabet letter
 * Return: 0 (success)
 #include <stdio.h>

int main(void)
{
char ch = 'a';
 for(ch='a'; ch <= 'z'; ch++)

{
    putchar(ch);

}
	return (0);
}

 */
int main(void)
{
	char ch = 'a';
while (ch <= 'z')

{putchar(ch);
ch++;
}
	putchar('\n');
	return (0);

}
