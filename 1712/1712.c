#include<stdio.h>
int func(int,int,int);
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", func(a,b,c));
    return 0;
}
int func(int a, int b, int c){
    return a / (c - b) + 1;
}