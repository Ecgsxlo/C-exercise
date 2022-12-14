#include <stdio.h>
#define N 4
void add_array(const int a[], const int b[], int c[], int n);
void show_array(const int x[], int n);
int main(void)
{
    int a[N] = {2, 4, 5, 8};
    int b[N] = {1, 0, 4, 6};
    int c[N] = {0};
    show_array(a, N);
    show_array(b, N);
    show_array(c, N);
    add_array(a, b, c, N);
    show_array(c, N);
    return 0;
}
void add_array(const int a[], const int b[], int c[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        c[i] = a[i] + b[i];
}

void show_array(const int x[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%-3d", x[i]);
}

