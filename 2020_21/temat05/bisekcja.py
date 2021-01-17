import math


def bisection_recursive(function, p, q, eps):
    s = (p + q)/2
    if abs(p - q)/2 < eps or function(s) == 0:
        return s

    if function(p) * function(s) < 0:
        return bisection_recursive(function, p, s, eps)
    return bisection_recursive(function, s, q, eps)


def bisection_while(function, p, q, eps):
    s = (p + q) / 2
    while abs(p - q)/2 > eps and function(s) != 0:
        s = (p + q) / 2
        if function(p) * function(s) < 0:
            q = s
        else:
            p = s
    return s


def W(x):
    return x**3 - 2*x**2 + 4*x - 1


print(bisection_recursive(W, -10, 10, 0.001))
print(bisection_while(W, -10, 10, 0.001))
print(bisection_recursive(math.sin, -1.5, 1, 0.001))
print(bisection_while(math.sin, -1.5, 1, 0.001))
