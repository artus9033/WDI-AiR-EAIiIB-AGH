import math

def derivative(f, x, h = 0.0001):
    return (f(x+h)-f(x))/h

def f(x):
    return x ** 2

def program():
    print(derivative(math.sin, 1))
    print(derivative(math.sin, 0))
    print(derivative(f, 1, 0.00001))

program()