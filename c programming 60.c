#include <stdio.h>
int main() {
    int arr[5]={64,25,12,22,11};
    for(int i=0;i<5-1;i++){
        int min=i;
        for(int j=i+1;j<5;j++)
            if(arr[j]<arr[min]) min=j;
        int temp=arr[min]; arr[min]=arr[i]; arr[i]=temp;
    }
    for(int i=0;i<5;i++) printf("%d ",arr[i]);
    return 0;
}
