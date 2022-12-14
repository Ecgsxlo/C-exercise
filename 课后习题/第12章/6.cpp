#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, temp, a[11];
    unsigned int seeds;
    for (seeds = 1; seeds <= 10; seeds++)
    {
        printf("Time #%d:\n", seeds);
        srand(seeds);
        for (i = 0; i < 11; i++)
            a[i] = 0;
        for (i = 0; i < 10; i++)
        {
            temp = rand() % 10 + 1;
            a[temp]++;
        }
        for (i = 1; i < N + 1; i++)
            printf("%-3d appeared %d times.\n", i, a[i]);
        printf("Total random numbers: %d\n\n", 1000);
    }
    return 0;
}

