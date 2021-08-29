// Функция | 1 прототип | Проверка          |
//_________|____________|_работоспособности_|_______________________________________________
// puts    |  +         |                   |
// strchr  |  +         |                   |
// strlen  |  +         |                   |
// strcpy  |  +         |                   |
// strncpy |  +         |                   |
// strcat  |  +         |                   |
// strncat |  +         |                   |
// fgets   |  +         |                   |
// strdup  |  +         |                   |
// getline |  +         |                   |

#include <cstdio>
#include <cstdlib>
#include <iostream>

int puts(const char* str);
int strchr(const char* str, int symbol);
size_t strlen(const char* str);
char* strcpy(char* destptr, const char* srcptr);
char* strncpy(char* destptr, const char* srcptr, size_t num);
char* strcat(char* destptr, const char* srcptr);
char* strncat(char* destptr, const char* srcptr, size_t num);
char* fgets(char* str, int num, FILE* stream);
char* strdup(const char* str);
char* getline(char* str, int size, char split);


int puts(const char* str)
{
    
    int i = 0;
    for (; str[i]; i++)
    {
        if (putchar(str[i]) == EOF)
        {
            return EOF;
        }
    }

    if (str[i] == '\0')
    {
        putchar('\n');
        
        return 1;
    }

    return EOF;
}

int strchr(const char* str, int symbol)
{
    for (int i = 0; str[i]; i++)
    {
        if (symbol == str[i])
        {
            return i;
        }
    }

    return NULL;
}

size_t strlen(const char* str)
{
    int i = 0;
    for (; str[i]; i++)
    {
        if (str[i] == '\0')
        {
            break;
        }
    }

    return i;
}

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

char* strncpy(char* destptr, const char* srcptr, size_t num)
{
    int i = 0;
    for (; i < num; i++)
    {
        destptr[i] = srcptr[i];
    }

    destptr[i + 1] = '\0';

    return destptr;
}

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

    for (; j < num; j++)
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
        
        if (ch == EOF)
        {
            return NULL;
        }

        if (ch == '\n')
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

char* getline(char* str, int size, char split)
{
    int i = 0;
    char ch = NULL;

    for (; true; i++)
    {
        scanf("%c", &ch);

        if (i >= size - 1 || ch == split || ch == '\n')
        {
            break;
        }

        str[i] = ch;
    }

    return str;
}
