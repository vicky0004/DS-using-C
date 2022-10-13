#include <stdio.h>
void print(void);
void insertEnd(void);

struct node{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode;


int main(){
    int choice=1;
    head=0;
    while(choice){
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
        printf("Do u want to enter new data(1,0)");
        scanf("%d",&choice);
    }
    printf("\nYour list is :");
    print();
    printf("enter data added to End :");
    insertEnd();
    printf("\nModified data: ");
    print();

}
void print(){
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void insertEnd(){
    temp=head;
    while(temp->next!=0){
        temp=temp->next;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp->next=newnode;
}
