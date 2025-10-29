#include <stdio.h>
long fact(int n){ return n==0?1:n*fact(n-1); }
int main(){
    int n; scanf("%d",&n);
    printf("Factorial=%ld",fact(n));
}
