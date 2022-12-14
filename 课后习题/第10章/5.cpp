#include <stdio.h>
double d_value(const double a[], int n);
void show_array(const double a[], int n);
int main(void)
{
    double m, n, val;
    double array[5] = {1.1, 4.2, 3.3, 2.1, 5.7};
    printf("Array:\n");
    show_array(array, 5);
    val = d_value(array, 5);
    printf("Maximum minus minimum is %g.\n", val);
    return 0;
}
double d_value(const double a[], int n)
{
    int i;
    double max = a[0];
    double min = a[0];
    for (i = 1; i < n; i++)
    {
        max = max < a[i] ? a[i] : max;
        min = min > a[i] ? a[i] : min;
    }
    return max - min;
}
void show_array(const double a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%-5g", a[i]);
    }
    putchar('\n');
    return;
}

