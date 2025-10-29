#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr, n;
    printf("Enter initial size: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    for (int i=0; i<n; i++) arr[i] = i+1;
    printf("Old array: ");
    for (int i=0; i<n; i++) printf("%d ", arr[i]);

    printf("\nEnter new size: ");
    scanf("%d", &n);
    arr = (int*)realloc(arr, n * sizeof(int));
    for (int i=0; i<n; i++) arr[i] = i+1;
    printf("New array: ");
    for (int i=0; i<n; i++) printf("%d ", arr[i]);
    free(arr);
    return 0;
}
