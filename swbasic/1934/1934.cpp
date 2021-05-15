#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    int m = (a * b) / gcd(a, b);
    return m;
}

int main()
{
    int count;
    while (1)
    {
        cin >> count;
        if (count < 1 || count > 1000)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    int A, B;

    for (int i = 0; i < count;)
    {
        cin >> A >> B;
        if (A > 45000 || A < 1 || B > 45000 || B < 1)
        {
            continue;
        }
        else
        {
            cout << lcm(A, B) << endl;
            i++;
        }
    }

    return 0;
}