#include <iostream>

using namespace std;

int gcd(int a, int b)
{

    if (a % b == 0)

        return b;

    return gcd(b, a % b);
} //recursion

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int *a = new int[n];

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        long long sum = 0;

        for (int k = 0; k < n; k++)
        {
            for (int l = k + 1; l < n; l++)
            {
                sum += gcd(a[k], a[l]);
            }
        }
        cout << sum << endl;
        delete (a);
    }
    return 0;
}