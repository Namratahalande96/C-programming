 #include <stdio.h>
int main() {
    int a=15,b=20,prod=a*b,temp1=a,temp2=b;
    while(temp1!=temp2){
        if(temp1>temp2) temp1-=temp2;
        else temp2-=temp1;
    }
    int gcd=temp1;
    printf("LCM=%d",prod/gcd);
    return 0;
}

