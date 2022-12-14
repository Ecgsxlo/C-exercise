#include <stdio.h>
void Fibonacci(int len);
int main()
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        printf("Top %d items of Fibonacci sequence:\n", n);
        Fibonacci(n);
    }
    printf("Done.\n");
    return 0;
}
void Fibonacci(int len)
{
    int i;
    unsigned long t, x, y;
    x = y = 1;
    for (i = 0; i < len; i++)
    {
        printf("%lu\n", x);
        t = x + y;
        x = y;
        y = t;
    }
}

