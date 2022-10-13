#include <stdio.h>

struct node{
    int data;
    struct node *next;
};
struct node *head,*temp,*currentnode,*nextnode,*prevnode,*newnode;


int main(){
    int choice=1;
    head=0;
    while(choice!=0){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("do u want to insert new data (0,1): ");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
