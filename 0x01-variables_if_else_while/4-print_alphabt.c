#include <stdio.h>

/**
*main -prints the alphabet in lowercase,
*followed with a new line.
*Return: 0 if successful,
*else return a non-zero
*/

int main(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
