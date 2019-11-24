rzym = {'M':1000, 'CM':900, 'D':500, 'CD':400, 'C':100, 'XC':90, 'L':50, 'XL':40, 'X':10, 'IX':9, 'V':5, 'IV':4, 'I':1 }

def convert(roman_number):
    result = 0
    roman_number += "#"
    p = 0
    while p < len(roman_number)-1:
        if roman_number[p] + roman_number[p+1] in rzym:
            result += rzym[roman_number[p] + roman_number[p+1]]
            p += 2
        else:
            result += rzym[roman_number[p]]
            p += 1
    return result
