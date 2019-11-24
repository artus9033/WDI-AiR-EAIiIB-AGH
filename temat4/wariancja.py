def function(list):
    average = 0
    variance = 0
    for n in list:
        average += n / len(list)

    for n in list:
        variance += ((average - n) ** 2) / (len(list) - 1)
    return (average, variance)


def program():
    list = []
    while True:
        given_number = int(input("Podaj liczbe: "))
        if given_number == 0:
            break
        list.append(given_number)
    print(function(list))
    print(function([3,3,3,3]))
    print(function([5,6,7,8,9]))

def main():
    program()

if __name__=="__main__":
    main()