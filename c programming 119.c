#include <stdio.h>
#include <math.h>
int main(){
    int n=9474,temp=n,count=0; 
    while(temp){ count++; temp/=10; }
    temp=n; int sum=0;
    while(temp){ int d=temp%10; sum+=pow(d,count); temp/=10; }
    printf(sum==n?"Armstrong":"Not Armstrong");
}
