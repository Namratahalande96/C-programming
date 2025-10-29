#include <stdio.h>

int main() {
    int n, a[100], even = 0, odd = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n; i++)
        (a[i] % 2 == 0) ? even++ : odd++;
    printf("Even = %d, Odd = %d\n", even, odd);
    return 0;
}
