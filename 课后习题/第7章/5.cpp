#include <stdio.h>
int main(void)
{
    int ch;
    int n = 0;
    printf("Enter some characters('#' to quit):\n");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
	        case '.':
	        {
	            putchar('!');
	            n++;
	            break;
	        }
	        case '!':
	        {
	            printf("!!");
	            n++;
	            break;
	        }
	        default:
	        {
	            putchar(ch);
	        }
        }
    }
    printf("Total replace %d times.", n);
    return 0;
}

