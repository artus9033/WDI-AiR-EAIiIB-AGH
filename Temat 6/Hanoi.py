def hanoi(n, start, target, support):
    if n == 1:
        return str(start) + " -> " + str(target) + "\n"
    if n > 1:
        return hanoi(n-1, start, support, target) \
               + hanoi(1, start, target, support) \
               + hanoi(n-1, support, target, start)


print(hanoi(7,1,2,3))