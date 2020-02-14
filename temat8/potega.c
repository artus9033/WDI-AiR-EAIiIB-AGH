#include <stdio.h>
#include <stdlib.h>

double power(double x, int n)
{
    double w = 1;
    
    for(int i = 0; i < n; i++)
        w = w * x;
    
    return w;
}

int main()
{
    printf("%lf \n", power(3, 2));
    printf("%lf", power(2, 4));
    
    return 0;
}
