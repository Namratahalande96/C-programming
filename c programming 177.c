#include <stdio.h>
int count(int n) {
    return (n == 0) ? 0 : 1 + count(n / 10);
}
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Digits = %d", count(n));
    return 0;
}
