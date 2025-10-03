#include <stdio.h>
int main() {
    int arr[5]={2,4,6,8,10}, key=6, found=0;
    for(int i=0;i<5;i++) if(arr[i]==key) found=1;
    if(found) printf("Found");
    else printf("Not Found");
    return 0;
}
