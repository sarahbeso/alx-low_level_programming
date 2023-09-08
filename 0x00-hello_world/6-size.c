#include <stdio.h>
/**
 * main - Entry point
 * Desciption: using sizeof to print size of variable
 * Return: Always 0 (success)
 */
int main(void)
{
printf("Size of a char :%lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int :%lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
