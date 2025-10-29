#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL) head=temp=newnode;
        else { temp->next=newnode; temp=newnode; }
    }
    printf("List: ");
    temp=head;
    while(temp){ printf("%d ",temp->data); temp=temp->next; }
}
