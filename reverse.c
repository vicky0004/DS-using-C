#include <stdio.h>

struct node{
    int data;
    struct node *next;
};
struct node *prevnode,*currentnode,*nextnode;
int main(){
    struct node *head,*newnode,*temp;
	head=0;int choice;
	printf("do u want to enter new data(0,1)");
	scanf("%d",&choice);
	while(choice){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter the data");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
		printf("do u want to enter new data(0,1)");
		scanf("%d",&choice);
	}
    prevnode=0;
    currentnode=nextnode=head;
    while(nextnode!=0){
        nextnode=currentnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=nextnode;

    while(temp!=0){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	return 0;
}

