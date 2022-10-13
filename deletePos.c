#include <stdio.h>
void deletePos(void);
void print(void);

//creating structure
struct node{
    int data;
    struct node *next;
};

//declairing structure pointer
struct node *head,*newnode,*nextnode,*temp;

//main function
int main(){
    
    //creating linked list 
    head=0;
    int choice=1;
    while(choice){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("do u wnat to enter new(0,1): ");
        scanf("%d",&choice);
    }
    printf("your list is: ");
    print();
    deletePos();
    printf("modified list is: ");
    print();

    return 0;
}


void print(){
    temp=head;
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void deletePos(){
    temp=head;
    int pos;
    int i=1;
    printf("\nEnter position: ");
    scanf("%d",&pos);
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
}