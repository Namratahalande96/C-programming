 #include <stdio.h>
#include <math.h>
int main() {
    int n=153,temp=n,sum=0,digits=0;
    while(temp){digits++; temp/=10;}
    temp=n;
    while(temp){sum+=pow(temp%10,digits); temp/=10;}
    if(sum==n) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}

