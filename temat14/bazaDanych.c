#include <stdio.h>
#include <stdlib.h>

#define ROZW_NADOBOWIAZKOWE 1

struct Kontakt
{
    char imie[30];
    char nazwisko[30];
    long int numer;
};

struct Baza
{
    int maks = 10;
    struct Kontakt *tab = (struct Kontakt *)malloc(sizeof(struct Kontakt) * this->maks);
    int aktualna = 0;
};

int dodaj(struct Baza *adrBazy, struct Kontakt *adrKontaktu)
{
    // obsługa przepełnienia
    if (adrBazy->aktualna + 1 == adrBazy->maks)
    {
#if ROZW_NADOBOWIAZKOWE
        adrBazy->maks += 10;
        adrBazy->tab = (struct Kontakt *)realloc(adrBazy->tab, sizeof(struct Kontakt *) * adrBazy->maks);

        if (adrBazy->tab == NULL)
        {
            return -1;
        }
#else
        return -1;
#endif
    }

    // skopiowanie wartości elementu na koniec bazy i inkrementacja licznika elementów w bazie
    *(adrBazy->tab + adrBazy->aktualna) = *adrKontaktu;
    adrBazy->aktualna++;

    // zwracam indeks dodanego elementu w tablicy
    return adrBazy->aktualna;
}

struct Baza usun(struct Baza bkpBaza, int indeks)
{
    if (indeks < 0 || indeks > bkpBaza.aktualna)
    {
        printf("Indeks poza granicami!\n");

        return bkpBaza;
    }

    int ct = indeks;

    for (int i = ct + 1; ct < bkpBaza.aktualna; ct++)
    {
        *(bkpBaza.tab + i - 1) = *(bkpBaza.tab + i);
    }

    bkpBaza.aktualna--;

    return bkpBaza;
}

void wypisz(struct Baza b)
{
    for (int i = 0; i < b.aktualna; i++)
    {
        printf("%s, %s , %ld \n", b.tab[i].imie, b.tab[i].nazwisko, b.tab[i].numer);
    }
}

int main()
{
    struct Baza b;
    struct Kontakt abonent = {"Piotr", "Pawlik", 123456789L};

    dodaj(&b, &abonent);

    int indeks1;
    int operacja = 1;
    while (operacja != 0)
    {
        printf("Co mam zrobić? (1 - wypisanie, 2 - dodawanie, 3 - usuwanie, 0 - koniec)\n");
        scanf("%d", &operacja);
        switch (operacja)
        {
        case 0:
            return 0;
        case 1:
            wypisz(b);
            break;
        case 2:
            printf("Wprowadź dane\n");
            printf("> Imię: ");
            scanf("%s", abonent.imie);
            printf("> Nazwisko: ");
            scanf("%s", abonent.nazwisko);
            printf("> Numer tel:");
            scanf("%ld", &abonent.numer);
            dodaj(&b, &abonent);
            break;
        case 3:
            printf("Podaj indeks, który mam usunąć: ");
            scanf("%d", &indeks1);
            b = usun(b, indeks1);
            break;
        default:
            printf("Błędna opcja!\n");
            break;
        }
    };
}