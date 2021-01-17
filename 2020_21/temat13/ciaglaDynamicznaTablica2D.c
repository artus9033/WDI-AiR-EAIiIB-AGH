//niesprawdzone
#include <stdio.h>
#include <stdlib.h>

int createContinousMatrix(double ***atab, int n);
void deleteContinousMatrix(double ***atab);
int copyMatrix(double ***pdest, double **src, int n);

void fillMatrix(double **tab, int n);
void printMatrix(double **tab, int n);

int main()
{
    double **m, **m2;
    if (createContinousMatrix(&m, 3) == 0)
    {
        fillMatrix(m, 3);
        printMatrix(m, 3);
        copyMatrix(&m2, m, 3);
        printMatrix(m2, 3);
        deleteContinousMatrix(&m);
        deleteContinousMatrix(&m2);
    }
    return 0;
}

int createContinousMatrix(double ***atab, int n)
{
    *atab = calloc(n, sizeof(double *));
    if (*atab == NULL)
        return -1;

    double *t = calloc(n * n, sizeof(double));
    if (t == NULL)
        return -1;

    for (double **i = *atab, *j = t; i < *atab + n; i++, j += n)
    {
        *i = j;
    }

    return 0;
}

void deleteContinousMatrix(double ***atab)
{
    free(*atab);
    free(**atab);
    *atab = NULL;
}
int copyMatrix(double ***pdest, double **src, int n)
{
    double **dest;
    if (createContinousMatrix(&dest, n) == -1)
        return -1;

    for (double *i = *src, *j = *dest; i < *src + n * n; i++, j++)
    {

        *j = *i;
    }

    *pdest = dest;
    return 0;
}

void fillMatrix(double **tab, int n)
{
    int k = 0;
    for (double **i = tab; i < tab + n; i++)
        for (double *j = *i; j < *i + n; j++)
        {
            *j = k;
            k++;
        }
}
void printMatrix(double **tab, int n)
{
    for (double **i = tab; i < tab + n; i++)
    {
        for (double *j = *i; j < *i + n; j++)
        {
            printf("%f ", *j);
        }
        printf("\n");
    }
}
