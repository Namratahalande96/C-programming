 #include <stdio.h>
int main() {
    int n=12345,count=0;
    while(n){count++; n/=10;}
    printf("Digits=%d",count);
    return 0;
}

