#include <stdio.h>
int main() {
    for(int n=100;n<=999;n++){
        int sum=0,temp=n;
        while(temp){int d=temp%10; sum+=d*d*d; temp/=10;}
        if(sum==n) printf("%d ",n);
    }
    return 0;
}
