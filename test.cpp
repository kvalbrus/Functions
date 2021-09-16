#include <cstdio>

#include "functions.cpp"
#include "test.h"

void TestFunctions()
{
    TestFunctionPuts();
    TestFunctionStrchr();
    TestFunctionStrlen();
    TestFunctionStrcpy();
    TestFunctionStrncpy();
    TestFunctionStrcat();
    TestFunctionStrncat();
    TestFunctionFgets();
    TestFunctionStrdup();
    TestFunctionGetline();
}

void TestFunctionPuts()
{
    printf("1) puts()\n");

    puts("1245\n232163246");
    puts("1251351331");

    printf("\n");
}

void TestFunctionStrchr()
{
    printf("2) strchr()\n");

    const char* num1 = strchr("fowghiwnginsoiwegw", 'w');
    const char* num2 = strchr("eeeeeeeeeeeeaeeeeeeeeeeeea", 'a');

    printf("(3)  - %p\n", num1);
    printf("(13) - %p\n", num2);

    printf("\n");
}

void TestFunctionStrlen()
{
    printf("3) strlen()\n");

    int size1 = strlen("121fegwef13fewgwe");
    int size2 = strlen("1253t525312r1");

    printf("(17) - %d\n", size1);
    printf("(13) - %d\n", size2);

    printf("\n");
}

void TestFunctionStrcpy()
{
    printf("4) strcpy()\n");

    char a1[20] = "124124151";
    char a2[20] = "";

    strcpy(a2, a1);

    printf("(124124151) - %s\n", a2);

    printf("\n");
}

void TestFunctionStrncpy()
{
    printf("5) strncpy()\n");

    char b1[20] = "Hello world!";
    char b2[20] = "";

    size_t size3 = 5;

    strncpy(b2, b1, size3);

    printf("(Hell) - %s\n", b2);

    printf("\n");
}

void TestFunctionStrcat()
{
    printf("6) strcat()\n");

    char c1[20] = "Hello ";
    char c2[20] = "world!";

    strcat(c1, c2);

    printf("(Hello world!) - %s\n", c1);

    printf("\n");
}

void TestFunctionStrncat()
{
    printf("7) strncat()\n");

    char d1[20] = "Hello ";
    char d2[20] = "world!";

    size_t size4 = 4;

    strncat(d1, d2, size4);

    printf("(Hello worl) - %s\n", d1);

    printf("\n");
}

void TestFunctionFgets()
{
    printf("8) fgets()\n");

    char SymbolsForFile[200];
    char Symbol2[200];
    FILE* file = fopen("text.txt", "r");
    FILE* file1 = fopen("text1.txt", "r");

    fgets(SymbolsForFile, 42, file);
    
    
    printf("123456789012345678901234567890123456789012345678901234567890\n");
    printf("         1         2         3         4         5         6\n");
    printf("%s\n", SymbolsForFile);

    fgets(Symbol2, 20, file1);
    printf("123456789012345678901234567890123456789012345678901234567890\n");
    printf("         1         2         3         4         5         6\n");
    printf("%s\n", Symbol2);
    printf("\n");
}

void TestFunctionStrdup()
{
    printf("9) strdup()\n");

    char* e;
    const char e1[200] = "125etasf32fw";

    e = strdup(e1);

    printf("%s - %s\n\n", e1, e);
}

void TestFunctionGetline()
{
    printf("10) getline()\n");

    FILE *file = fopen("text.txt", "r");

    char line2[99] = "(ifejkgsgjkhruiegnuirehgubergerunguieraeruigbergnehnindsnfsjefnseinibgir)";
    char *line = NULL;
    size_t n = 0;
    ssize_t n1;

    while ((n1 = getline(&line, &n, file)) != -1) 
    {
        printf("Retrieved line of length %zd:\n", n1);
        fwrite(line, n1, 1, stdout);
    }

    free(line);
}