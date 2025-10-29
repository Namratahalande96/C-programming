#include <stdio.h>
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n], freq[100]={0};
    printf("Enter elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=0;i<n;i++) freq[arr[i]]++;
    printf("Frequency:\n");
    for(int i=0;i<100;i++)
        if(freq[i]>0) printf("%d occurs %d times\n",i,freq[i]);
    return 0;
}
