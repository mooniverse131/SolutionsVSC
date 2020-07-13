def func(a,b,c):
    return int(a / (c- b) +1)
if __name__ == "__main__":
    a = int(input())
    b = int(input())
    c = int(input())
    print(func(a, b, c))