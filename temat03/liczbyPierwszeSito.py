import math


def sieve(number):
    prime_list = [True for _ in range(number + 1)]
    for prime in range(2, int(math.sqrt(number))):
        if prime_list[prime]:
            for to_check in range(prime + 1, number + 1):
                if to_check % prime == 0:
                    prime_list[to_check] = False

    for n in range(2, number + 1):
        if prime_list[n]:
            print(n, end=" ")


def main():
    x = int(input("Podaj liczbe: "))
    sieve(x)


if __name__ == "__main__":
    main()
