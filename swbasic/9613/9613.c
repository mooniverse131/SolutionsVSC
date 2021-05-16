#include <stdio.h>

int gcd(int a, int b)
{

    if (a % b == 0)

        return b;

    return gcd(b, a % b);
} //recursion

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        int a[100];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }

        long sum = 0;

        for (int k = 0; k < n; k++)
        {
            for (int l = k + 1; l < n; l++)
            {
                sum += gcd(a[k], a[l]);
            }
        }
        printf("%ld\n", sum);
    }
    return 0;
}