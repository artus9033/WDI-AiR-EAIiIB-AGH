value = []


def fibbonaci(n):
    if n < 0:
        return None
    if n == 0 or n == 1:
        return n
    if value[n] != 1:
        return value[n]
    value[n] = fibbonaci(n - 1) + fibbonaci(n - 2)
    return value[n]


n = int(input("Podaj numer wyrazu: "))
value = [1 for x in range(n + 1)]
print(fibbonaci(n))
