#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0, y = 0;
    char d = ' ';
    scanf("%c", &d);
    scanf("%i", &x);
    scanf("%i", &y);

    switch (d)
    {
    case '+':
    {
        printf("%i", x + y);
        break;
    }
    case '-':
    {
        printf("%i", x - y);
        break;
    }
    case '*':
    {
        printf("%i", x * y);
        break;
    }
    case '/':
    {
        if (y != 0)
            printf("%lf", (double)x / (double)y);
        else
            printf("y=0");
        break;
    }
    default:
    {
        printf("zly znak");
    }
    }
    return 0;
}
