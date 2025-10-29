#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node *next; };

int main() {
    struct node *head=NULL,*temp,*newnode; int n,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        newnode=malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
    }
    temp=head;
    while(temp){ count++; temp=temp->next; }
    printf("Total nodes=%d",count);
}
