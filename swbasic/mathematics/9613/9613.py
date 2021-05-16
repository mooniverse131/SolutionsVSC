def gcd(a,b):
    if(a % b == 0):
        return b
    return gcd(b, a%b)

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = []
        n = list(input().split())
        sum = 0
        for k in range(1, len(n)):
            for l in range(k + 1, len(n)):
                sum += gcd(int(n[k]), int(n[l]))
        print(sum)