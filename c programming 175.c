#include <stdio.h>
int sum(int n) {
    return (n == 0) ? 0 : n % 10 + sum(n / 10);
}
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Sum = %d", sum(n));
    return 0;
}
