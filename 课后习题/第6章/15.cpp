#include <stdio.h>
int main()
{
    int i = 0;
    char input[260];
    printf("Please enter a string:\n");
    do
    {
        scanf("%c", &input[i]);
    } while (input[i] != '\n' && ++i && i < 260);
    printf("Reversing print the string is:\n");
    for (i--; i >= 0; i--)
        printf("%c", input[i]);
    printf("\nDone.\n");
    return 0;
}

