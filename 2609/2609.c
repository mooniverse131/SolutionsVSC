#include<stdio.h>
int gcd(int a, int b){
    int c;
    while(b != 0){
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int main(){
    int a, b, lcm;
    scanf("%d %d", &a, &b);
    lcm = (a * b) / gcd(a,b);
    printf("%d\n%d", gcd(a,b), lcm);
    return 0;
}