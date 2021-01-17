def suma_rek(lst):
    if len(lst) > 1:
        return lst[0] + suma_rek(lst[1:])
    elif len(lst) == 1:
        return lst[0]
    else:
        return 0


def suma_tail(lst, suma=0):
    if len(lst) > 1:
        return suma_tail(lst[1:], suma + lst[0])
    elif len(lst) == 1:
        return suma + lst[0]
    else:
        return 0


def main():

    lista_1 = [1, 2, 3, 4]
    lista_2 = []

    print("Dla listy [1,2,3,4]")
    print(sum(lista_1))
    print(suma_rek(lista_1))
    print(suma_tail(lista_1))

    print()

    print("Dla listy []")
    print(sum(lista_2))
    print(suma_tail(lista_2))
    print(suma_tail(lista_2))


main()
