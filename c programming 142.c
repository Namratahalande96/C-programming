#include <stdio.h>
int main(){
    char op; double a,b;
    scanf("%lf %c %lf",&a,&op,&b);
    switch(op){
        case '+': printf("%.2lf",a+b); break;
        case '-': printf("%.2lf",a-b); break;
        case '*': printf("%.2lf",a*b); break;
        case '/': if(b!=0) printf("%.2lf",a/b); else printf("Div by 0");
                  break;
        default: printf("Invalid");
    }
}
