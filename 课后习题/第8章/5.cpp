#include <stdio.h>
#include <ctype.h>
int main()
{
    int high = 100;
    int low = 1;
    int guess = (high + low) / 2;
    int response;
    printf("Respond y if right, or h if it is higher, and with l if lower.");
    printf("is %d?\n", guess);
    while ((response = getchar()) != 'y')
    {
        if (response == '\n')
            continue;
        if (tolower(response) != 'h' && tolower(response) != 'l')
        {
            printf("Please enter y, h  or l\n");
            continue;
        }
        if (tolower(response) == 'h')
            high = guess - 1;
        else if (tolower(response) == 'l')
            low = guess + 1;
        guess = (high + low) / 2;
        printf("Well, then, is it %d?\n", guess);
    }
    printf("I knew I could do it!\n");
    return 0;
}

