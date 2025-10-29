#include <stdio.h>

int revNum(int n, int r) {
    if (n == 0) return r;
    return revNum(n / 10, r * 10 + n % 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Reverse = %d", revNum(n, 0));
    return 0;
}
