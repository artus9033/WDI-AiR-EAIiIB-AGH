rzym = {
    'M': 1000,
    'CM': 900,
    'D': 500,
    'CD': 400,
    'C': 100,
    'XC': 90,
    'L': 50,
    'XL': 40,
    'X': 10,
    'IX': 9,
    'V': 5,
    'IV': 4,
    'I': 1
}


def wariant1(wejscie):
    # wariant iteracyjny
    accumulator = 0
    i = len(wejscie) - 1

    while(i >= 0):
        if(wejscie[i-1:i+1] in rzym):
            accumulator += rzym[wejscie[i-1:i+1]]
            i -= 2
        else:
            accumulator += rzym[wejscie[i]]
            i -= 1
    return accumulator


def wariant2(wejscie):
    # wariant rekurencyjny
    accumulator = 0

    if(len(wejscie)):
        if wejscie[0:2] in rzym:
            accumulator += rzym[wejscie[0:2]]
            wejscie = wejscie[2:]
        else:
            accumulator += rzym[wejscie[0]]
            wejscie = wejscie[1:]

        return accumulator + wariant2(wejscie)
    else:
        return accumulator


def wariant3(wejscie, accumulator=0):
    # wariant rekurencyjny ogonowo
    if(len(wejscie)):
        if wejscie[0:2] in rzym:
            return wariant3(wejscie[2:], accumulator + rzym[wejscie[0:2]])
        else:
            return wariant3(wejscie[1:], accumulator + rzym[wejscie[0]])
    else:
        return accumulator


def test():
    r = "CDXVI"

    w1 = wariant1(r)
    w2 = wariant2(r)
    w3 = wariant3(r)

    print("Wynik: %i, równy wynik: %r" % (w1, w1 == w2))
    print("Wynik 3: %i" % w3)


test()
