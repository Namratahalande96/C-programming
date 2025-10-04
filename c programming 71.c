#include <stdio.h>
int power(int x,int y){
    if(y==0) return 1;
    return x*power(x,y-1);
}
int main() {
    printf("2^5=%d",power(2,5));
    return 0;
}
