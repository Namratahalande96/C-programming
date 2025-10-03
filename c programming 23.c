#include <stdio.h>
int main() {
    int arr[5]={3,9,1,7,4}, min=arr[0];
    for(int i=1;i<5;i++) if(arr[i]<min) min=arr[i];
    printf("Min=%d",min);
    return 0;
}
