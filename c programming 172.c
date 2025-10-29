#include <stdio.h>
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("GCD = %d", gcd(a, b));
    return 0;
}
