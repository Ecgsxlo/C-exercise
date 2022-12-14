#include <stdio.h>
void show_array(int n, int m, const double x[3][5]);
void copy_array(int n, int m, const double a[3][5], double b[3][5]);
int main(void)
{
    const double a[3][5] = 
    {
        {1.0, 2.0, 3.0, 4.0, 5.0},
        {6.0, 7.0, 8.0, 9.0, 10.0},
        {11.0,12.0,13.0,14.0,15.0}
    };
    double b[3][5] = {0.0};
    show_array(3, 5, a);
    show_array(3, 5, b);
    copy_array(3, 5, a, b);
    show_array(3, 5, b);
    return 0;
}
void show_array(int n, int m, const double x[3][5])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%-5g", x[i][j]);
        putchar('\n');
    }
}
void copy_array(int n, int m, const double a[3][5], double b[3][5])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            b[i][j] = a[i][j];
    }
}

