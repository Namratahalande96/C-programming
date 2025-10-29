#include <stdio.h>
int main() {
    long bin;
    int dec = 0, base = 1, rem;
    printf("Enter binary: ");
    scanf("%ld", &bin);
    while (bin > 0) {
        rem = bin % 10;
        dec += rem * base;
        bin /= 10;
        base *= 2;
    }
    printf("Decimal = %d", dec);
    return 0;
}
