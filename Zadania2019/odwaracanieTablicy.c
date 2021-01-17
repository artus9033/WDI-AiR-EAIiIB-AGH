#include <stdio.h>
#include <stdlib.h>
#define T 10

int odwr(int tab[], int *tk)
{
    for (; tab < tk; tab++, tk--)
    {
        int t = *tab;
        *tab = *tk;
        *tk = t;
    }
}

int main()
{
    int tab[T] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    odwr(tab, &tab[T - 1]);

    for (int i = 0; i < T; i++)
        printf("%i ", tab[i]);
    return 0;
}
