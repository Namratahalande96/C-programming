#include <stdio.h>
int main(){
    int base,exp; long long res=1;
    scanf("%d%d",&base,&exp);
    for(int i=0;i<exp;i++) res*=base;
    printf("Result=%lld",res);
    return 0;
}
