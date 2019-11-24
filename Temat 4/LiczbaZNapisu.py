def translate(number):
    slownik = {
        "0":"zero",
        "1":"jeden",
        "2":"dwa",
        "3": "trzy",
        "4": "cztery",
        "5": "pięć",
        "6": "sześć",
        "7": "siedem",
        "8": "osiem",
        "9":"dziewięć"}
    result = ""
    for digit in number:
        if digit in slownik:
             result += slownik[digit] + " "

    return result

def main():
    print(translate(input("Podaj liczbe: ")))

if __name__=="__main__":
    main()