import math
rzym = {'M': 1000, 'CM': 900, 'D': 500, 'CD': 400, 'C': 100, 'XC': 90,
        'L': 50, 'XL': 40, 'X': 10, 'IX': 9, 'V': 5, 'IV': 4, 'I': 1}


def convert(roman_number, current_result):
    if len(roman_number) == 1:
        return current_result + rzym[roman_number[0]]
    return convert(roman_number[1:], current_result + math.copysign(rzym[roman_number[0]], rzym[roman_number[0]] - rzym[roman_number[1]]))


print(convert("MCMLXIX", 0))
