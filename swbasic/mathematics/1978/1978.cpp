#include <iostream>

using namespace std;

int isPrime(int a)
{
    int i = 2;
    bool iPrime = true;

    if (a == 1)
    {
        iPrime = false;
        return iPrime;
    }

    while (i < a) // sqrt 사용시 처리 속도 향상 기대 가능
    {
        if (a % i == 0)
        {
            iPrime = false;
            break;
        }
        i += 1;
    }
    return iPrime;
}

int main()
{
    int n;
    cin >> n;

    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;

    for (int j = 0; j < n; j++)
    {
        if (isPrime(a[j]))
        {
            count++;
        }
    }
    cout << count << endl;
    delete (a);
    return 0;
}