#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main() {
    struct Node *head=NULL,*temp,*newNode;
    for(int i=1;i<=3;i++){
        newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->data=i*10;
        newNode->next=NULL;
        if(head==NULL) head=temp=newNode;
        else { temp->next=newNode; temp=newNode; }
    }
    temp=head;
    while(temp){ printf("%d ",temp->data); temp=temp->next; }
    return 0;
}
