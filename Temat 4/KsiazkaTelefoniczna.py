ksiazka = {('Jan', 'Kowalski'):"123456789", ('Adam', 'Nowak'):"987654321" , ('Adam', 'Kowalski'): "600300900"}

def find_numbers(surname):
    numbers = []
    for tuple in ksiazka.keys():
        if tuple[1] == surname:
            numbers.append(ksiazka[tuple])
    return numbers


print(ksiazka[('Jan', 'Kowalski')])
print(find_numbers("Kowalski"))
