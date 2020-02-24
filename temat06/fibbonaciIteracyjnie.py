value = [0,1]

def fibbonaci(n):
    if n < 0:
        return None
    for k in range(2, n+1):
        value.append(value[k-1] + value[k-2])
    return value[n]
