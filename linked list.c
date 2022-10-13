#include <stdio.h>
//Write a program to store 10 element to a linked list
struct node{
	int data;
	struct node *next;
};

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
	temp=head;
	while(temp!=0){
		printf("%d",temp->data);
		temp=temp->next;
	}

	return 0;
}


reverse(){

}
