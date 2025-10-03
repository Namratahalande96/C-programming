 #include <stdio.h>
int main() {
    int a=36,b=60;
    while(a!=b){
        if(a>b) a-=b;
        else b-=a;
    }
    printf("GCD=%d",a);
    return 0;
}

