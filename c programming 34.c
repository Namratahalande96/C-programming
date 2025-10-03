#include <stdio.h>
int main() {
    int x=10,*p;
    p=&x;
    printf("x=%d, *p=%d",x,*p);
    return 0;
}
