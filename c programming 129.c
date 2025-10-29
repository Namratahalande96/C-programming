#include <stdio.h>
int main(){
    int n,a[50],*p,sum=0;
    scanf("%d",&n);
    for(p=a;p<a+n;p++) scanf("%d",p);
    for(p=a;p<a+n;p++) sum+=*p;
    printf("Sum=%d",sum);
    return 0;
}
