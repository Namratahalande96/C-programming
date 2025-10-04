#include <stdio.h>
#include <math.h>
int main() {
    int bin=1011, dec=0, i=0;
    while(bin){
        dec+=(bin%10)*pow(2,i);
        bin/=10; i++;
    }
    printf("Decimal=%d",dec);
    return 0;
}
