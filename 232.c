#include <stdio.h>

float add(float a,float b){return a+b;}
float sub(float a,float b){return a-b;}
float mul(float a,float b){return a*b;}
float divv(float a,float b){return b!=0?a/b:0;}

int main(){
    float x,y; int ch;
    printf("Enter two numbers: ");
    scanf("%f%f",&x,&y);
    printf("1.Add 2.Sub 3.Mul 4.Div\n");
    scanf("%d",&ch);
    switch(ch){
        case 1: printf("Sum=%.2f\n",add(x,y)); break;
        case 2: printf("Sub=%.2f\n",sub(x,y)); break;
        case 3: printf("Mul=%.2f\n",mul(x,y)); break;
        case 4: printf("Div=%.2f\n",divv(x,y)); break;
        default: printf("Invalid\n");
    }
    return 0;
}
