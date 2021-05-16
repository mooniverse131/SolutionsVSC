def gcd(a, b):
    while(b !=0):
        a , b = b , a % b
    return a

def lcm(a,b):
    return int((a * b) / gcd(a,b))

if __name__ == "__main__":
    c = int(input())
    for i in range(c):
        a , b = map(int, input().split())
        print(lcm(a,b))