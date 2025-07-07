#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>

int _putchar(char c);
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif