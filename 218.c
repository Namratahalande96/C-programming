#include <stdio.h>

float average(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    return (float)sum / n;
}

int main() {
    int n, arr[100];
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Average = %.2f\n", average(arr, n));
    return 0;
}
