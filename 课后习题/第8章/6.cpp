#include <stdio.h>
#include <ctype.h>
int get_first();
int main()
{
    int ch;
    while ((ch = get_first()) != '#')
        printf("%c\n", ch);
    printf("Done.\n");
    return 0;
}
int get_first(void)
{
    int ch;
    do
    {
        ch = getchar();
    } while (isspace(ch));
    while (getchar() != '\n')
        continue;
    return ch;
}

