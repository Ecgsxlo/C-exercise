#include <stdio.h>
int main(void)
{
    int i = 0;
    double Chuckie = 100.0;
    do
    {
        i++;
        Chuckie += Chuckie * 0.08;
        Chuckie -= 10;
        printf("(%d)account:%g.\n", i, Chuckie);
    } while (Chuckie > 9);
    printf("After %d years:\n", ++i);
    printf("Chuckie has taken all of the money!\n");
    return 0;
}

