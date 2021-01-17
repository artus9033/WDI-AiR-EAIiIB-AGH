def sort(lista):
    mniejsze = []
    wieksze = []
    if len(lista) > 1:
        p = lista[0]

        for el in lista[1:]:
            if el < p:
                mniejsze.append(el)
            else:
                wieksze.append(el)

        return sort(wieksze)+[p]+sort(mniejsze)

    elif len(lista) == 1:
        return lista
    else:
        return []


def __main__():
    lista = [7, 6, 9, 3, 1, 5, 7, 12, 8]
    print(lista)

    lista = sort(lista)
    print(lista)


__main__()
