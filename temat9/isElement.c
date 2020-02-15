#include <stdio.h>
#include <stdlib.h>
#define N 10
char * isElement(char *tab, char znak)
{
    for(int i=0;tab[i]!='\0';i++)
    {
        if(tab[i]==znak) return &tab[i];
    }

    return NULL;
}

char * isElement2(char *tab, char znak)
{
    for(char *i=&tab[0];*i!='\0';i++)
    {
        if(*i==znak) return i;
    }
    return NULL;
}

int main()
{
    char tab[N]={0};
    fgets(tab, N, stdin);
    char * e1=isElement(tab,'a');
    char * e2=isElement2(tab,'a');
    if(e1!=NULL) printf("%c \n", *e1);
    if(e2!=NULL) printf("%c", *e2);
    return 0;
}
