#include <stdio.h>
int main() {
    int n=13, bin[20],i=0;
    while(n){ bin[i++]=n%2; n/=2; }
    for(int j=i-1;j>=0;j--) printf("%d",bin[j]);
    return 0;
}
