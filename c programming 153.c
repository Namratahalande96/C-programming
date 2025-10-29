#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *a;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    a = (int*)calloc(n, sizeof(int));
    if (!a) { printf("Memory not allocated!"); return 1; }

    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    free(a);
    return 0;
}
