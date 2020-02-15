//niesprawdzone
#include <stdio.h>
#include <stdlib.h>
int IsPalindrom(char* n, int l)
{
    if (l<=1) return 1;
    if (*n!=*(n+l-1)) return 0;
    return IsPalindrom(n+1,l-2);
}
int main()
{
    printf("%i",IsPalindrom("abba",4));
    return 0;
}
