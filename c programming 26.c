#include <stdio.h>
int main() {
    int arr[5]={5,2,9,1,7}, i,j,temp;
    for(i=0;i<5-1;i++)
        for(j=0;j<5-i-1;j++)
            if(arr[j]>arr[j+1]){
                temp=arr[j]; arr[j]=arr[j+1]; arr[j+1]=temp;
            }
    for(i=0;i<5;i++) printf("%d ",arr[i]);
    return 0;
}
