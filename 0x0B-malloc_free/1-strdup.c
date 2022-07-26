#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: pointer to  the string
 * Return: a pointer to the duplicated string
 * returns NULL if str = NULL
 * returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
int i, len;
char *dest;

len = 0;
if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

dest = malloc(sizeof(char) * (len + 1));
if (dest == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
dest[i] = '\0';
dest[i] = '\0';
return (dest);
}

