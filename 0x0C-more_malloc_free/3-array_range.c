#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 * betty style doc for function main goes there
 */
int *array_range(int min, int max)
{
int *array;
int c;
if (min > max)
return (NULL);
array = malloc(sizeof(*array) * ((max - min) + 1));
if (array == NULL)
return (NULL);
for (c = 0; min <= max; c++, min++)
array[c] = min;
return (array);
}
