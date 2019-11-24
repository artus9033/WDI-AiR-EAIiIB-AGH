def translate(number):

    slownik = {
        "dwadzieścia":"2",
        "trzydzieści":"3",
        "czterdzieści":"4",
        "pięćdziesiąt":"5",
        "jeden":"1",
        "dwa":"2",
        "trzy":"3",
        "cztery":"4",
        "pięć":"5",
        "sześć":"6",
        "siedem":"7",
        "osiem":"8",
        "dziewięć":"9",}
    
    digits = number.split(" ")
    result = slownik[digits[0]]

    if len(digits) > 1:
        result += slownik[digits[1]]
    else:
        result += "0"

    return int(result)


def program():
    print(translate(input("Tekst: ")))

def main():
    program()

if __name__=="__main__":
    main()
