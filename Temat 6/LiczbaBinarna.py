def przelicz(n):
    if n == 1:
        return "1"
    else:
        return przelicz(n//2) + str(n%2)
