#include <stdio.h>
#define MAX 5
int stack[MAX], top=-1;
void push(int x){ if(top<MAX-1) stack[++top]=x; }
void pop(){ if(top>=0) top--; }
void display(){ for(int i=top;i>=0;i--) printf("%d ",stack[i]); }
int main() {
    push(10); push(20); push(30);
    display();
    pop();
    printf("\nAfter pop: "); display();
    return 0;
}
