#include <stdio.h>

/**
* main - prints all the numbers of base 16
* in lowercase, followed by a new line.
* Return: 0 if successful, otherwise
* return a non-zero
*/

int main(void)
{
char ch;
int n;
for (n = 48; n <= 57; n++)
{
putchar (n);
}
for (ch = 'a'; ch >= 'f'; ch--)
{
putchar(ch);
}
char ch;
for (ch = 'a' ; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
