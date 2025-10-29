#include <stdio.h>
int main() {
    int n, key, found=0;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for (int i=0; i<n; i++) scanf("%d", &a[i]);
    printf("Enter key: ");
    scanf("%d", &key);
    for (int i=0; i<n; i++)
        if (a[i]==key) { printf("Found at index %d", i); found=1; break; }
    if (!found) printf("Not found");
    return 0;
}
