#ifndef _MAIN_H_

3

#define _MAIN_H_

7

void *malloc_checked(unsigned int b);

9

char *string_nconcat(char *s1, char *s2, unsigned int n);

11

void *_calloc(unsigned int nmemb, unsigned int size);

13

int *array_range(int min, int max);

15

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

19

#endif

20

​