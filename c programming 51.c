#include <stdio.h>
int main() {
    int arr[6]={10,25,5,30,15,20};
    int first=arr[0], second=-1;
    for(int i=1;i<6;i++) {
        if(arr[i]>first) {
            second=first;
            first=arr[i];
        } else if(arr[i]>second && arr[i]!=first) {
            second=arr[i];
        }
    }
    printf("Second Largest = %d",second);
    return 0;
}
