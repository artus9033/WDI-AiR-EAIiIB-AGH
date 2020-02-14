#include <stdio.h>
#include <stdlib.h>

int * compress(double ** a_table, int *a_size)
{
    int l=0;
    for(double *i=*a_table;i<*a_table+*a_size;i++)
        if(*i!=0) l++;

    double * new_table=calloc(l,sizeof(**a_table));
    int * pos_table=calloc(l,sizeof(int));
    if(new_table==NULL || pos_table==NULL)
    {
        free(new_table);
        free(pos_table);
        return NULL;
    }

    int j=0;
    for(double *i=*a_table;i<*a_table+*a_size;i++)
    {
        if(*i!=0)
        {
            new_table[j]=*i;
            pos_table[j]=i-*a_table;
            j++;
        }
    }
    *a_size=l;
    *a_table=new_table;
    return pos_table;

}

int main()
{
    int l=10;
    double *tab=calloc(l,sizeof(double));
    tab[2]=3.0, tab[5]=1.0, tab[8]=7.0;
    int * pos =compress(&tab,&l);

    for(int i=0; i<l;i++)
    {
        printf("%f ",tab[i]);
        printf("%i\n",pos[i]);
    }
    free(tab);
    free(pos);
    return 0;
}
