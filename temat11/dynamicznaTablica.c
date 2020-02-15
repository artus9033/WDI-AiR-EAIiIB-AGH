#include <stdio.h>
#include <stdlib.h>

int* tablica(int l)
{
    int* tab=calloc(l,sizeof(int));
    if(tab==NULL) return NULL;

    for(int i=0, j=0;i<l;j++)
        if(j%2!=0)
        {
            *(tab+i)=j;
            i++;
        }


    return tab;

}

int main()
{
    int l=0;
    scanf("%i",&l);
    int* tab2 = tablica(l);

    if(tab2!=NULL)
        for(int i=0; i<l;i++)
            printf("%i ", *(tab2+i));
    else
        printf("NULL");
    free(tab2);
    return 0;
}
