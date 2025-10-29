#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, sum = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (!arr) { printf("Memory allocation failed"); return 1; }

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) sum += arr[i];
    printf("Sum=%d\n", sum);

    free(arr);
    return 0;
}
