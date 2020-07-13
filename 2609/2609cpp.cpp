#include<iostream>
using namespace std;
int gcd(int a, int b){
    int c;
    while(b !=0){
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int main(){
    int a, b, lcm;
    cin >> a >> b;
    lcm = (a * b) / gcd(a,b);
    cout << gcd(a,b) << "\n" << lcm;
    return 0;
}