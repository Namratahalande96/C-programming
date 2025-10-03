#include <stdio.h>
int main() {
    int arr[5]={2,4,6,8,10}, key=8, low=0, high=4, mid;
    while(low<=high) {
        mid=(low+high)/2;
        if(arr[mid]==key){printf("Found"); return 0;}
        else if(arr[mid]<key) low=mid+1;
        else high=mid-1;
    }
    printf("Not Found");
    return 0;
}
