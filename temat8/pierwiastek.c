#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x=0;
    do
    {
        scanf("%lf",&x);
        printf("%lf",sqrt(x));
        printf("\n");

    }
    while(x!=0.0 && x!=1.0);
    
    return 0;
}
