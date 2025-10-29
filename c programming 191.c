#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, *arr;
    printf("Enter size: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    if (!arr) { printf("Memory not allocated.\n"); return 1; }
    printf("Enter %d elements: ", n);
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("You entered: ");
    for (int i=0; i<n; i++) printf("%d ", arr[i]);
    free(arr);
    return 0;
}
