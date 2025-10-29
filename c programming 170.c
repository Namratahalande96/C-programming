#include <stdio.h>
#include <stdlib.h>

struct node { int data; struct node *next; };

int main() {
    struct node *head=NULL,*temp,*prev,*newnode;
    int n,val;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        newnode=malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
    }
    printf("Enter value to delete: ");
    scanf("%d",&val);
    temp=head;
    while(temp && temp->data!=val){ prev=temp; temp=temp->next; }
    if(!temp) printf("Not found");
    else{
        if(temp==head) head=head->next;
        else prev->next=temp->next;
        free(temp);
        printf("Deleted %d\n",val);
    }
}
