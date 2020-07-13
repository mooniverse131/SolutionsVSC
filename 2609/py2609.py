def gcd(a,b):
    while(b !=0):
        c = a % b
        a = b
        b = c
    return a
def lcm(a, b):
    return int((a * b)/ gcd(a,b))
if __name__ == "__main__":
    a = int(input())
    b = int(input())
    print(gcd(a,b),"\n",lcm(a,b))