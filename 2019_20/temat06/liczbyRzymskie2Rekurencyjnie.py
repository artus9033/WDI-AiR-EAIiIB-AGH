rzym = {'M': 1000, 'CM': 900, 'D': 500, 'CD': 400, 'C': 100, 'XC': 90,
        'L': 50, 'XL': 40, 'X': 10, 'IX': 9, 'V': 5, 'IV': 4, 'I': 1}


def convert(roman_number):
    if len(roman_number) == 0:
        return 0
    if len(roman_number) > 1:
        if roman_number[0] + roman_number[1] in rzym:
            return rzym[roman_number[0] + roman_number[1]] + convert(roman_number[2:])
    return rzym[roman_number[0]] + convert(roman_number[1:])


print(convert("MCMLXIX"))
