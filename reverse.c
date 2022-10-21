#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *prevnode,*currentnode,*nextnode;
int main(){
    struct node *head,*newnode,*temp;
	head=NULL;
	int choice=1;
	do{
		printf("do u want to enter new data[ 0,1 ]: ");
		scanf("%d",&choice);
	switch(choice){
		case 1 :
			newnode=(struct node *)malloc(sizeof(struct node));
			printf("Enter the data : ");
			scanf("%d",&newnode->data);
			newnode->next=NULL;
			if(head==NULL){
				head=temp=newnode;
			}
			else{
				temp->next=newnode;
				temp=newnode;
			}
		}
	}while(choice);
	printf("Before reverse items are : ");
	temp=head;
	while(temp!=0){
		printf("%d ",temp->data);
		temp=temp->next;
	}
    prevnode=0;
    currentnode=nextnode=head;
    while(nextnode!=0){
        nextnode=currentnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;
	printf("\nAfter reverse items are : ");
	temp=head;
    while(temp!=0){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	return 0;
}

