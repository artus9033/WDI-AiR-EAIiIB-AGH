//niesprawdzone
#include <stdio.h>
#include <stdlib.h>
void usun(char *n, char a)
{
    while (*n != '\0')
    {
        if (*n == a)
        {
            char *t = n;
            while (*t != '\0')
            {
                *t = *(t + 1);
                t++;
            }
            n--;
        }
        n++;
    }
}
int main()
{
    char *s = malloc(100);
    strcpy(s, "Zaawansowane techniki programowania ");
    usun(s, 'a');
    puts(s);
    free(s);
    return 0;
}
