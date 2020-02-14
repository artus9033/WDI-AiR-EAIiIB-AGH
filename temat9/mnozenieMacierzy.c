#include <stdio.h>
#include <stdlib.h>
#define ROW1 2
#define COL1 3
#define ROW2 COL1
#define COL2 2
void maciez(int tab1[][COL1],int tab2[][COL2])
{
    int tab[ROW1][COL2]={0};
    for (int k=0;k<ROW1;k++)
    {
        for(int l=0;l<COL2;l++)
        {
            int w=0;
            for(int i=0;i<ROW2;i++)
            {
                w=w+tab1[k][i]*tab2[i][l];
            }
            tab[k][l]=w;
        }
    }

    for(int i =0; i<ROW1;i++)
    {
        for(int j=0; j<COL2;j++) printf("%3i ",tab[i][j]);
        printf("\n");
    }
}

int main()
{
    int tab1[ROW1][COL1]={{1,0,2},{-1,3,1}};
    int tab2[ROW2][COL2]={{3,1},{2,1},{1,0}};
    maciez(tab1,tab2);
    return 0;
}
