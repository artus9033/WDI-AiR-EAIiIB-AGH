//niesprawdzone
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a=' ';
    int l=0;
    char* tab=NULL;
    while('.'!=a)
    {
        if(a!=10 && a!=13) printf("podaj kolejna litere do dodania (. konczy): ");
        scanf("%c",&a); //moznaby ta linijke zapisac tak : scanf(" %c",&a); (zamiast ponizszego ifa) ale wtedy nie dzialalaby spacja
        if(a!=10 && a!=13)
        {
            if(l%10==0)
            {
                char* new_tab=realloc(tab,10*sizeof(a));
                if(new_tab!=NULL)
                {
                    tab=new_tab;
                }
                else
                {
                    printf("ERROR");
                    break;
                }
            }
            if(tab!=NULL)
            {
                tab[l]=a;
                l++;
            }
            else printf("ERROR2");

        }
    }
    for(char* i=tab;*(i-1)!='.';i++) printf("%c",*i);
    free(tab);
    return 0;
}
