#include <stdio.h>

/**
 * main - prints the number of arguments passed into it,
 * followed by a new line
 * @argc: count of the arguments passed
 * Return: 0 Always successful
 */

int main(_attribute_((unused)) int argc,
_attribute_((unused)) char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
