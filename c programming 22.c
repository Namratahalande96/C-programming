#include <stdio.h>
int main() {
    int arr[5]={3,9,1,7,4}, max=arr[0];
    for(int i=1;i<5;i++) if(arr[i]>max) max=arr[i];
    printf("Max=%d",max);
    return 0;
}
