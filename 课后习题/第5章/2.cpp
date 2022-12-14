#include <stdio.h>
int main(void)
{
    int n;
    int i = 0;
    printf("Please enter a number: ");
    scanf("%d", &n);
    printf("Print %d to %d:\n", n, n + 10);
    while (i <= 10)
    {
        printf("%d\n", n + i);
        i++;
    }
    printf("Done.\n");

    return 0;
}

