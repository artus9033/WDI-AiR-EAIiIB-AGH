//niesprawdzone
#include <stdio.h>
#include <stdlib.h>
char** wyrazy(char S[])
{
    int l=1;
    for(char* i=S;*i!='\0';i++)
        if(*i==' ')l++;
    char ** w=calloc(l,sizeof(char*));
    if(w==NULL)
    {
        printf("ERROR");
        return NULL;
    }
    w[0]=S;
    l=1;
    for(int i=0;S[i]!='\0';i++)
        if(S[i]==' ')
        {
            S[i]='\0';
            i++;
            w[l]=&S[i];
            l++;
        }
    w[l]=NULL;
    return w;
}
//alternatywna wersja funkcji z jedna petla
char** wyrazyALT(char S[])
{
    int l=1;
    char ** w=calloc(1,sizeof(char*));
    w[0]=S;
    for(int i=0;S[i]!='\0';i++)
        if(S[i]==' ')
        {
            char ** new_w=realloc(w,sizeof(char*));
            if(new_w==NULL)
            {
                printf("ERROR");
                return NULL;
            }
            w=new_w;
            S[i]='\0';
            i++;
            w[l]=&S[i];
            l++;
        }
       
    w[l]=NULL;
    return w;
}
int main()
{
    char a[100];
    fgets(a,100,stdin);
    char ** w=wyrazy(a);
    for(char**i=w;*i!=NULL;i++)
    {
        printf(*i);
        printf("\n");
    }
    return 0;
}
