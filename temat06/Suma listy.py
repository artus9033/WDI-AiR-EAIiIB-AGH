def suma_zwykla(lista):
    if len(lista) > 1:
        return lista[0] + suma_zwykla(lista[1:])
    elif len(lista) == 1:
        return lista[0]
    else:
        return 0
        
def suma_ogon(lista, suma = 0):
    if len(lista) > 1:
        return suma_ogon(lista[1:], suma + lista[0])
    elif len(lista) == 1:
        return suma + lista[0]
    else:
        return 0
    
def main():
    list1 = [1, 2, 3, 4]
    list2 = []
    print(suma_zwykla(list1))
    print(suma_ogon(list1))
    print(suma_zwykla(list2))
    print(suma_ogon(list2))
    
if __name__ == '__main__':
    main()
