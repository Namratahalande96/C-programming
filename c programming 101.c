  #include <stdio.h>
#include <stdlib.h>
int main() {
    int n; printf("Enter n: "); scanf("%d",&n);
    int *arr = malloc(n * sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int max=arr[0];
    for(int i=1;i<n;i++) if(arr[i]>max) max=arr[i];
    printf("Max = %d",max);
    free(arr);
    return 0;
}
