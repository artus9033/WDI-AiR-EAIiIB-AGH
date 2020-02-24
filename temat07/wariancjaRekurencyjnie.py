def Wariancja(lista, l, suma=0):
    if l == 0:
        return (0, 0)
    else:
        if len(lista) == l:
            wynik = Wariancja(lista[1:], l, suma+lista[0])
            return (wynik[0], (wynik[1] + (lista[0] - wynik[0])**2) / (l-1))

        elif len(lista) > 1:
            wynik = Wariancja(lista[1:], l, suma+lista[0])
            return(wynik[0], wynik[1] + (lista[0] - wynik[0])**2)

        elif len(lista) == 1:
            return ((suma+lista[0])/l, (lista[0]-(suma+lista[0])/l)**2)


def main():

    lista_0 = []
    wynik_0 = Wariancja(lista_0, len(lista_0))
    print(lista_0)
    print("średnia: ", wynik_0[0])
    print("wariancja: ", wynik_0[1])

    print()

    lista_1 = [3, 3, 3, 3]
    wynik_1 = Wariancja(lista_1, len(lista_1))
    print(lista_1)
    print("średnia: ", wynik_1[0])
    print("wariancja: ", wynik_1[1])

    print()

    lista_2 = [5, 6, 7, 8, 9]
    wynik_2 = Wariancja(lista_2, len(lista_2))
    print(lista_2)
    print("średnia: ", wynik_2[0])
    print("wariancja: ", wynik_2[1])


main()
