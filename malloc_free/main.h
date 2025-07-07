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

#endif