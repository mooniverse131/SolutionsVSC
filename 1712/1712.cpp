#include<iostream>
using namespace std;
int func(int,int,int);
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << func(a,b,c) <<endl;
    return 0;
}
int func(int a, int b, int c){
    return a / (c - b) + 1;
}