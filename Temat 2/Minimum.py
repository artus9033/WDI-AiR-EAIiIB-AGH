minimum = float(input('Podaj liczbe: '))
for _ in range(9):
    number = float(input('Podaj liczbe: '))
    if number < minimum:
        minimum = number
print(minimum)
