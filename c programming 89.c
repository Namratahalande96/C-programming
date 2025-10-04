#include <stdio.h>
#define MAX 5
int q[MAX], front=0,rear=-1;
void enqueue(int x){ if(rear<MAX-1) q[++rear]=x; }
void dequeue(){ if(front<=rear) front++; }
void display(){ for(int i=front;i<=rear;i++) printf("%d ",q[i]); }
int main() {
    enqueue(1); enqueue(2); enqueue(3);
    display();
    dequeue();
    printf("\nAfter dequeue: "); display();
    return 0;
}
