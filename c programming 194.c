#include <stdio.h>
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i=0; i<n; i++) scanf("%d", &arr[i]);
    int max1=arr[0], max2=-99999;
    for (int i=1; i<n; i++) {
        if (arr[i]>max1) { max2=max1; max1=arr[i]; }
        else if (arr[i]>max2 && arr[i]!=max1) max2=arr[i];
    }
    printf("Second largest = %d", max2);
    return 0;
}
