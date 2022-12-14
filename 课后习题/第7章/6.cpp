#include <stdio.h>
int main()
{
    int ch;
    int n = 0;
    int flag = 0;
    printf("Enter some characters('#' to quit):\n");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
	        case 'e':
	        {
	            flag = 1;
	            break;
	        }
	        case 'i':
	        {
	            if (1 == flag)
	            {
	                n++;
	            }
	            flag = 0;
	            break;
	        }
	        default:
	        {
	            flag = 0;
	        }
        }
    }
    printf("Totally exist %d times \'ei\'.", n);

    return 0;
}

