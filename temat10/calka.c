//niesprawdzone
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double integral(double (*f)(double), double x1, double x2, double prec)
{
    double w=0;
    for(double i=x1;i<x2;i+=prec)
        w+=((*f)(i+prec/2))*prec;
    return w;
}
double y(double x)
{
    return x;
}
int main()
{
    printf("%lf\n",integral(sin,0,M_PI,0.001));
    printf("%lf\n",integral(y,0,M_PI,0.001));
    return 0;
}
