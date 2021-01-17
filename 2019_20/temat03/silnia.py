while True:
    given_number = int(input("Podaj liczbę: "))
    if given_number == 0 or given_number == 1:
        print(1)
        break
    else:
        factorial = 1
        for n in range(1, given_number + 1):
            factorial *= n
        print(factorial)
