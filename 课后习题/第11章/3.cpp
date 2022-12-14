#include <stdio.h>
#include <ctype.h>
char *getword(char *str);
int main(int argc, char *argv[])
{
    char input[10];
    while (getword(input) != NULL)
    {
        printf("Result:\n");
        puts(input);
    }
    printf("Done.\n");
    return 0;
}
char *getword(char *str)
{
    int ch;
    int n = 0;
    char *pt = str;
    while ((ch = getchar()) != '\n' && isspace(ch))
        continue;
    if (ch == '\n')
        return NULL;
    else
    {
        n++;
        *str++ = ch;
    }
    while ((ch = getchar()) != '\n' && !isspace(ch) && (n < 10 - 1))
    {
        *str++ = ch;
        n++;
    }
    *str = '\0';

    if (ch == '\n')
        return NULL;
    else
    {
        while (getchar() != '\n')
            continue;
        return pt;
    }
}

