//niesprawdzone
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sortow(char *tab[], int l)
{
    for (char **i = tab; i < tab + l - 1; i++)
        for (char **j = tab; j < tab + l - (i - tab) - 1; j++)
            if (strcmp(*j, *(j + 1)) > 0)
            {
                char *t = *j;
                *j = *(j + 1);
                *(j + 1) = t;
            }
}
int main()
{
    char *tab[5] = {"Kot ma Ale", "Ala ma kota", "Ola ma psa", "Pies ma pchly", "Ala nie lubi Oli"};
    sortow(tab, 5);
    for (int i = 0; i < 5; i++)
    {
        for (char *j = tab[i]; *j != '\0'; j++)
        {
            printf("%c", *j);
        }
        printf("\n");
    }
    return 0;
}
