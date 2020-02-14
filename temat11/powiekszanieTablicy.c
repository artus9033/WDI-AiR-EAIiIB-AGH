#include <stdio.h>
#include <stdlib.h>

float * add(float* tab, int n, float new_elem)
{
    float* tab2=calloc(n+1,sizeof(float));
    if(tab2==NULL) return NULL;
    for(float* i=tab;i<tab+n;i++)
        *(tab2+(i-tab))=*i;

    free(tab);
    *(tab2+n)=new_elem;
    return tab2;
}

int main()
{
    float* tab1=NULL;

    for(int i=0; i<10;i++)
    {
        tab1 = add(tab1,i,i);
        if(tab1==NULL)
        {
            printf("NULL");
            break;
        }
    }
    if(tab1!=NULL)
        for(int i=0; i<10;i++)
            printf("%f ", *(tab1+i));
    else
        printf("NULL");
    free(tab1);
    return 0;
}
