#include <stdio.h>
#include <stdlib.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_memset(char *s, char b, unsigned int n);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_memcpy(char *dest, char *src, unsigned int n);
int _strlen(char *s);
int _isdigit(char *s);
void _puts(char *s);
void _print_error(void);
void _print_result(char *result);
char *_multiply(char *num1, char *num2);
int _putchar(char c);
