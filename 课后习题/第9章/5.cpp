#include <stdio.h>
void large_of(double *x, double *y);
int main()
{
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2)
    {
        large_of(&a, &b);
        printf("Results: %g and %g\n", a, b);
    }
    printf("Done.\n");
    return 0;
}
void large_of(double *x, double *y)
{
    *y = *x > *y ? *x : *y;
    *x = *y;
}

