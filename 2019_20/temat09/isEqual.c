//niesprawdzone
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool IsEqual(char *a, char *b)
{
    while (*a != '\0' || *b != '\0')
    {
        if (*a != *b)
            return false;
        a++;
        b++;
    }
    return true;
}
int main()
{
    printf("%i\n", IsEqual("Ala ma kota", "Ala ma kota"));
    printf("%i\n", IsEqual("Ala ma", "Ala ma kota"));
    printf("%i\n", IsEqual("Ala ma kota", "Ala ma"));
    return 0;
}
