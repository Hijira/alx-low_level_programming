#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 * Return: pointer of an array of chars
 * betty style doc for function main goes there
 */
char *_strdup(char *str)
{
char *output;
unsigned int a, b;
if (str == NULL)
return (NULL);
for (a = 0; str[a] != '\0'; a++)
;
output = (char *)malloc(sizeof(char) * (a + 1));
if (output == NULL)
return (NULL);
for (b = 0; b <= a; b++)
output[b] = str[b];
return (output);
}
