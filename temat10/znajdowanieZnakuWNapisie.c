//skonczone

#include <stdio.h>

#define SIZE 10

char * znajdz_znak(char *napis, char szuk_znak);

int main()
{
    char *p;
    char tab[SIZE];
    fgets(tab, SIZE, stdin);
    p = znajdz_znak(tab, 'i');
    if(p == 0) printf("Nie ma tej literki");
    else{
        printf("%c", *p);
    }
    return 0;
}


char * znajdz_znak(char *napis, char szuk_znak){
for (int j=0; napis[j] != '\0'; j++){
    if(napis[j]==szuk_znak){
        return &napis[j];
        }
    }
return 0;
}
