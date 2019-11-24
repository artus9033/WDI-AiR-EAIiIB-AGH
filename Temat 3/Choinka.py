rows=int(input("Podaj liczbe rzędów: "))
for current_row in range(1, rows + 1):
    for _ in range(rows - current_row):
        print(" ", end="")
    for _ in range(2 * current_row - 1):
        print("*", end="")
    print("")
