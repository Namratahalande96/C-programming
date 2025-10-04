#include <stdio.h>
#include <math.h>
int main() {
    int start=100,end=500;
    for(int n=start;n<=end;n++){
        int temp=n,d=0,sum=0;
        while(temp){d++; temp/=10;}
        temp=n;
        while(temp){sum+=pow(temp%10,d); temp/=10;}
        if(sum==n) printf("%d ",n);
    }
    return 0;
}
