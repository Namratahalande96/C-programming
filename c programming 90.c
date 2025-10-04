#include <stdio.h>
long fact[20];
long factorial(int n){
    if(n==0) return 1;
    if(fact[n]!=0) return fact[n];
    return fact[n]=n*factorial(n-1);
}
int main() {
    printf("Factorial=%ld",factorial(10));
    return 0;
}
