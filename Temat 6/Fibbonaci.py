def fibbonaci(n):
    if n < 1:
        return None
    if n == 0 or n == 1:
        return n
    return fibbonaci(n-1) + fibbonaci(n-2)

