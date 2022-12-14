#include <stdio.h>
int main()
{
    int n, odd, even;
    int eum, oum;
    odd = even = 0;
    eum = oum = 0;
    printf("Please enter a integer (0 to quit): ");
    while (scanf("%d", &n) == 1 && (n != 0))
    {
        if (n % 2 == 0)
        {
            even++;
            eum += n;
        }
        else
        {
            odd++;
            oum += n;
        }
        printf("You can enter again (0 to quit): ");
    }
    printf("Even number: %d\n", even);
    if (even > 0)
        printf("The average of even: %g\n", (float)sum / even);
    printf("Odd number: %d\n", odd);
    if (odd > 0)
        printf("The average of odd: %g\n", (float)sum / odd);
    printf("Done.\n");

    return 0;
}

