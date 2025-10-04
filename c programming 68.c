#include <stdio.h>
int main() {
    int n=29,count=0;
    while(n){ if(n&1) count++; n>>=1; }
    printf("Set bits=%d",count);
    return 0;
}
