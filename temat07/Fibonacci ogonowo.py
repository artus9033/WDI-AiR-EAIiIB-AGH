def fibbo_rec(n, first = 1, second = 1):
    if n == 1 or n == 0: 
        return second
    elif n > 1:
        return fibbo_rec(n-1, second, first + second)


def main():
    n = int(input())
    print(fibbo_rec(n))
if __name__ == "__main__":
    main()
