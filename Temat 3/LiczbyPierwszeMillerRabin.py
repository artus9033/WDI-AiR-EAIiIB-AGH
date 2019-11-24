import random

def pot_mod(a,b,n):
    Y=1
    while b>0:
        if b % 2 == 0:
            a=(a*a)%n
            b = b/2
        else:
            Y=(a*Y)%n
            b= b- 1
    return Y

def wylicz(n):
    N=n-1
    tu=[]
    tu.append(0)
    tu.append(0)

    while N%(2**(tu[0]+1))==0:
        tu[0]=tu[0]+1
    tu[1]=N/(2**tu[0])

    return tu


def swiadek(a,n):
    tu=wylicz(n)
    t=tu[0]
    u=tu[1]
    x=[]
    x.append(pot_mod(a,u,n))
    for i in range(1,t+1):
        x.append(x[i-1]**2%n)
        if x[i]==1 and x[i-1] != 1 and x[i-1] != n-1:
            return True
    if x[t]!=1:
        return True
    return False

def miller_rabin(n,s):
    if n==1:
        return False
    if n==2:
        return True
    if n%2==0:
        return False
    for j in range(1,s):
        a=random.randint(1,n-1)
        if swiadek(a,n):
            return False
    return True

def main():
    x=600

    for i in range(x+1):
        if miller_rabin(i,20):
            print(i)


if __name__=="__main__":
    main()

