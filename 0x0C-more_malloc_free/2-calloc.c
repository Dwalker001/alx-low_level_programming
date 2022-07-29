#include "main.h"

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of element
 * @size: size of byte each
 * Return: a pointer to the allocated memory
 * return NULL if malloc fails or the size or nmemb is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *s;
int n;
if (nmemb == 0 || size == 0)
return (NULL);
n = nmemb * size;
s = malloc(n);
if (s == NULL)
{
free(s);
return (NULL);
}
_memset(s, 0, n);
return (s);
}
