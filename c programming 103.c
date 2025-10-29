  #include <stdio.h>
int main() {
    int a[5]={1,2,3,4,5},*p=a;
    for(int i=4;i>=0;i--) printf("%d ",*(p+i));
    return 0;
}

