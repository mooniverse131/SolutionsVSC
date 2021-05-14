#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int lcm(int a, int b)
{
    int c = (a * b) / gcd(a, b);
    return c;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << "\n"
         << lcm(a, b);
    return 0;
}