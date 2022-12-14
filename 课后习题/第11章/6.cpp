#include <stdio.h>
#include <string.h>
char *s_gets(char *st, int n);
int is_within(char ch, const char *str);
int main(int argc, char *argv[])
{
    char ch, input[20];
    while (s_gets(input, 20) != NULL)
    {
        ch = getchar();
        while (getchar() != '\n') continue;
        printf("String:\n");
        puts(input);
        if (!is_within(ch, input)) printf("Not exist %c in the string.\n", ch);
        else printf("Exist %c in the string.\n", ch);
    }
    printf("Done.\n");
    return 0;
}
char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }
    return ret_val;
}
int is_within(char ch, const char *str)
{
    while (*str)
    {
        if (*str != ch) ++str;
        else return 1;
    }
    return 0;
}

