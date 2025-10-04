#include <stdio.h>
int gcd(int a,int b){ return (b==0)?a:gcd(b,a%b); }
int main() {
    int a=15,b=20;
    int lcm=(a*b)/gcd(a,b);
    printf("LCM=%d",lcm);
    return 0;
}
