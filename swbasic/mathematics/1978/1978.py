import math

def isPrime(a):
    i = 2
    iPrime = True
    if a == 1:
        iPrime = False
        return iPrime

    while i<= int(math.sqrt(a)):
        if a % i == 0:
           iPrime = False
           return iPrime
        i += 1
    return iPrime

if __name__ == "__main__":
    n = int(input())
    a = []
    a = list(input().split())
    count = 0
    for i in range(n):
        if isPrime(int(a[i])):
            count += 1
    print(count)