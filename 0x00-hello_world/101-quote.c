#include <unistd.h>

/**
 * main - Entry point
 * Description: print a qoute using write functio
 * write (int fd ,const void *buf,size_t count)
 * Return: 1(not succecc)
 */
int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, quo, 59);
return (1);

