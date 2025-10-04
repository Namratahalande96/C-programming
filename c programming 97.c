#include <stdio.h>
int main() {
    int start=100,end=200;
    for(int n=start;n<=end;n++){
        int temp=n,rev=0;
        while(temp){rev=rev*10+temp%10; temp/=10;}
        if(rev==n) printf("%d ",n);
    }
    return 0;
}
