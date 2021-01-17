#include <stdio.h>
#include <stdlib.h>

double **createMatrix(int n);
void fillMatrix(double **tab, int n);
void printMatrix(double **tab, int n);
void deleteMatrix(double ***a_tab, int n);

int main()
{
    double **M = createMatrix(4);
    printMatrix(M, 4);
    if (M == NULL)
        printf("ERROR");
    else
    {
        fillMatrix(M, 4);
        printMatrix(M, 4);
        deleteMatrix(&M, 4);
        printf("%i", M);
    }
    return 0;
}

double **createMatrix(int n)
{
    double **matrix = calloc(n, sizeof(double *));
    if (matrix == NULL)
    {
        return NULL;
    }
    for (double **i = matrix; i < matrix + n; i++)
    {
        *i = calloc(n, sizeof(double));
        if (*i == NULL)
        {
            deleteMatrix(&matrix, i - matrix);
            return NULL;
        }
    }
    return matrix;
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
void deleteMatrix(double ***a_tab, int n)
{
    for (double **i = *a_tab; i < *a_tab + n; i++)
    {
        free(*i);
    }
    free(*a_tab);
    *a_tab = NULL;
}
