#include <stdio.h>

int isPrime(int a)
{
    int i = 2;
    int iPrime = 1;

    if (a == 1)
    {
        iPrime = 0;
        return iPrime;
    }

    while (i < a) // sqrt 사용시 처리 속도 향상 기대 가능
    {
        if (a % i == 0)
        {
            iPrime = 0;
            break;
        }
        i += 1;
    }
    return iPrime;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count = 0;

    for (int j = 0; j < n; j++)
    {
        if (isPrime(a[j]))
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}