def newton(n, k):
    if k < 0 or n < k:
        return None
    if n == k or k == 0:
        return 1
    return newton(n-1, k-1) + newton(n-1, k)
