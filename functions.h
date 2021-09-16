#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <cstdio>
#include <cstdlib>
#include <iostream>

int puts(const char* str);

const char* strchr(const char* str, int symbol);

size_t strlen(const char* str);

char* strcpy(char* destptr, const char* srcptr);

char* strncpy(char* destptr, const char* srcptr, size_t num);

char* strcat(char* destptr, const char* srcptr);

char* strncat(char* destptr, const char* srcptr, size_t num);

char* fgets(char* str, int num, FILE* stream);

char* strdup(const char* str);

ssize_t getline(char **lineptr, size_t *n, FILE *stream);

#endif