#include <stdio.h>
int main() {
    int arr[6]={2,5,7,8,10,11}, even=0, odd=0;
    for(int i=0;i<6;i++){
        if(arr[i]%2==0) even++;
        else odd++;
    }
    printf("Even=%d, Odd=%d",even,odd);
    return 0;
}
