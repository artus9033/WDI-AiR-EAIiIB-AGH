#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    int tab[N][N]={0};
    tab[0][0]=1;
    for(int i=0; i<(N/2);i++)
    {
        for(int j=i+1;j<N-i;j++)
        {
            tab[i][j]=tab[i][j-1]+1;
        }
        for(int k=i+1;k<N-i;k++)
        {
            tab[k][N-1-i]=tab[k-1][N-1-i]+1;
        }
        for(int l=N-2-i;l>=i;l--)
        {
            tab[N-1-i][l]=tab[N-1-i][l+1]+1;
        }
        for(int m=N-2-i;m>i;m--)
        {
            tab[m][i]=tab[m+1][i]+1;
        }
        tab[i+1][i+1]=tab[i+1][i]+1;
    }

    printf("\n");
    for(int i =0; i<N;i++)
    {
        for(int j=0; j<N;j++) printf("%3i ",tab[i][j]);
        printf("\n");
    }
    return 0;
}
