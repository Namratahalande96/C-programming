#include <stdio.h>
#include <math.h>
int main(){
    int n,temp,digits=0,sum=0;
    scanf("%d",&n);
    temp=n;
    while(temp){ temp/=10; digits++; }
    temp=n;
    while(temp){
        int r=temp%10;
        sum+=pow(r,digits);
        temp/=10;
    }
    if(sum==n) printf("Armstrong");
    else printf("Not Armstrong");
}
