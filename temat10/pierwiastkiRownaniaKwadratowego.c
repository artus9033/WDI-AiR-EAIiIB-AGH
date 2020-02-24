#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int roots(float a, float b, float c, float *x1, float *x2)
{
    float d = (b * b) - (4 * a * c);
    //    printf("%f",d);
    if (d > 0)
    {
        *x1 = (-b - sqrt(d)) / (2 * a);
        *x2 = (-b + sqrt(d)) / (2 * a);
        return 2;
    }
    else if (0 == d)
    {
        *x1 = (-b) / (2 * a);
        //        printf("%f", *x1);
        return 1;
    }
    else if (d < 0)
        return 0;

    return -1;
}

int main()
{
    float x1;
    float x2;
    int r = roots(1, 5, 1, &x1, &x2);
    if (r == 2)
    {
        printf("%f \n", x1);
        printf("%f \n", x2);
    }
    else if (r == 1)
        printf("%f\n", x1);
    else if (r == 0)
        printf("brak");
    else
        printf("blad");
    return 0;
}
