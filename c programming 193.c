#include <stdio.h>
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n], sum = 0;
    printf("Enter elements: ");
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);
    int *p = arr;
    for (int i=0; i<n; i++) sum += *(p+i);
    printf("Sum = %d", sum);
    return 0;
}
