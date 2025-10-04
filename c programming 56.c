#include <stdio.h>
int main() {
    int start=10,end=30;
    for(int n=start;n<=end;n++){
        int flag=1;
        for(int i=2;i<=n/2;i++) if(n%i==0){flag=0; break;}
        if(flag && n>1) printf("%d ",n);
    }
    return 0;
}
