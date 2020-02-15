//dziala, ale mogloby byc to lepiej napisane
#include <stdlib.h>
#include <stdio.h>
#define SIZE 10
struct wpis
{
    char Fname[30];
    char Sname[30];
    long int phone_nr;
};
struct baza
{
    int max_size;
    int act_size;
    struct wpis *tab;
};
int dodaj(struct baza *a_bazy, struct wpis *a_wpisu)
{
    if (a_bazy->act_size < a_bazy->max_size)
    {
        a_bazy->tab[a_bazy->act_size] = *a_wpisu;
        a_bazy->act_size++;
        return 0;
    }
    return -1;
}
/*
int dodaj2(struct baza *a_bazy, struct wpis *a_wpisu)
{
    if(a_bazy->act_size<a_bazy->max_size)
    {
        a_bazy->tab[a_bazy->act_size]=*a_wpisu;
        a_bazy->act_size++;
        return 0;
    }
    else
    {
         //fputs("%i \n",a_bazy, stdout);
         printf("%i \n",a_bazy->tab);
        struct wpis* tab2=realloc(a_bazy->tab,SIZE*sizeof(struct wpis));
        // fputs("2 \n", stdout);
        if (tab2==NULL) return -1;
        a_bazy->tab=tab2;
        a_bazy->max_size+=SIZE;
        printf("%i \n",a_bazy->tab);
        //dodaj2(a_bazy, a_wpisu);
        // fputs("3 \n", stdout);
    }
    return -1;
}
*/
int dodaj2(struct baza *a_bazy, struct wpis *a_wpisu)
{
    if (a_bazy->act_size < a_bazy->max_size)
    {
        a_bazy->tab[a_bazy->act_size] = *a_wpisu;
        a_bazy->act_size++;
        return 0;
    }
    else //z jakiegoś powodu ten else nie dziala tak jak powinien
    {
        //fputs("%i \n",a_bazy, stdout);
        printf("%i \n", a_bazy->tab);
        struct wpis *tab2 = malloc(SIZE * sizeof(struct wpis));
        // fputs("2 \n", stdout);
        if (tab2 == NULL)
            return -1;
        for (int i = 0; i < a_bazy->act_size; i++)
        {
            tab2[i] = a_bazy->tab[i];
        }
        a_bazy->tab = tab2;
        a_bazy->max_size += SIZE;
        printf("%i \n", a_bazy->tab);
        //dodaj2(a_bazy, a_wpisu);
        // fputs("3 \n", stdout);
    }
    return -1;
}
struct baza usun(struct baza par_baza, int indeks)
{
    par_baza.act_size--;
    for (int i = indeks; i < par_baza.act_size; i++)
    {
        par_baza.tab[i] = par_baza.tab[i + 1];
    }
    return par_baza;
}
void b_print(struct baza par_baza)
{
    for (int i = 0; i < par_baza.act_size; i++)
    {
        puts(par_baza.tab[i].Fname);
        printf(" ");
        puts(par_baza.tab[i].Sname);
        printf(" ");
        printf("%li", par_baza.tab[i].phone_nr);
        printf("\n");
    }
}
int main()
{
    struct baza b;
    b.tab = malloc(SIZE * sizeof(struct wpis));
    if (b.tab != NULL)
    {
        b.max_size = SIZE;
        b.act_size = 0;
        struct wpis w1 = {
            .phone_nr = 123456789,
            .Fname = "Pan",
            .Sname = "S"};
        struct wpis w2 = {
            .phone_nr = 234567890,
            .Fname = "Pan2",
            .Sname = "S2"};
        for (int i = 0; i < 11; i++)
            dodaj2(&b, &w1);
        dodaj2(&b, &w2);
        b_print(b);
        b = usun(b, 0);
        printf("\n");
        b_print(b);
        free(b.tab);
    }
    return 0;
}
