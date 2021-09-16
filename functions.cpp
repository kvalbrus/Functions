#include <cstdio>
#include <cstdlib>
#include <iostream>

#include "functions.h"

// пишет в конце строки /n
int puts(const char* str)
{    

    for (; *str; str++)
    {
        if (putchar(*str) == EOF)
        {
            return EOF;
        }
    }

    putchar('\n');
        
    return 1;
}

// позиция найденого символа
const char* strchr(const char* str, int symbol)
{
    for (; *str; str++)
    {
        if (symbol == *str)
        {
            return str;
        }
    }

    return NULL;
}

// длина строки
size_t strlen(const char* str)
{
    size_t i = 0;
    for (; str[i]; i++) {}

    return i;
}

// копирует строку
char* strcpy(char* destptr, const char* srcptr)
{
    int i = 0;
    for (; srcptr[i]; i++)
    {
        destptr[i] = srcptr[i];
    }

    destptr[i + 1] = '\0';

    return destptr;
}

// копирует строку
char* strncpy(char* destptr, const char* srcptr, size_t num)
{
    size_t i = 0;
    for (; i < num - 1; i++)
    {
        destptr[i] = srcptr[i];
    }

    destptr[i + 1] = '\0';

    return destptr;
}

// присоединяет строки
char* strcat(char* destptr, const char* srcptr)
{
    int i = strlen(destptr);
    int j = 0;

    for(; srcptr[j]; j++)
    {
        destptr[i + j] = srcptr[j];
    }

    destptr[i + j] = '\0';

    return destptr;
}

char* strncat(char* destptr, const char* srcptr, size_t num)
{
    int i = strlen(destptr);
    int j = 0;

    for (; j < num - 1; j++) // ! не более чем num
    {
        destptr[i + j] = srcptr[j];
    }

    destptr[i + j] = '\0';

    return destptr;
}

char* fgets(char* str, int num, FILE* stream)
{
    int ch = 0, i = 0;

    for (;i < num - 1; i++)
    {
        ch = getc(stream);
        
        if (ch == EOF || ch == '\n')
        {
            break;
        }

        str[i] = ch;
    }

    str[i] == '\0';

    return str;   
}

char* strdup(const char* str)
{
    size_t size = strlen(str) + 1;
    char* destptr = NULL;
    destptr = (char*) malloc(size);

    if (destptr == NULL)
    {
        return NULL;
    }

    strcpy(destptr, str);
    
    return destptr;
}

ssize_t getline(char **lineptr, size_t *n, FILE *stream)
{
    if (stream == NULL || n == NULL || lineptr == NULL)
    {
        return EINVAL;
    }

    char symbol = ' ';
    ssize_t i = 0;

    for (; stream; i++)
    {
        symbol = getc(stream);
        *lineptr[i] = symbol;
    }

    return i;
}

// cppreference
// man *function name*
// exmp: $ man getline