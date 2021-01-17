#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 9

void bubble(int tab[], int size)
{
	for (int i = size - 1; i >= 0; i--)
		for (int j = 0; j < i; j++)
			if (tab[j] > tab[j + 1])
			{
				int t = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = t;
			}
}

int main()
{
	int tab[ROZMIAR] = {7, 6, 9, 3, 1, 5, 7, 12, 8};
	bubble(tab, ROZMIAR);

	for (int i = 0; i < ROZMIAR; i++)
		printf("%i ", tab[i]);

	return 0;
}
