#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head;

void addnode(void);
void sort(void);
void display(void);


int main(){
	int choice;
	printf("1-add node\n2-sort linkedlist\n3-display\n4-exit");
	
	do{
		printf("\nEnter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				addnode();
				break;
			case 2:
				sort();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("invalid input\n");
		}
	}while(choice!=4);
	
	return 0;
	
}

void addnode(){
	int x;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
		printf("node not created\n");
	}
	else{
		printf("enter the data : ");
		scanf("%d",&x);
		newnode->data=x;
		newnode->next=NULL;
		if(head==NULL){
			head=newnode;
		}
		else{
			newnode->next=head;
			head=newnode;
		}
	}
}

void display(){
	struct node *temp;
	temp=head;
	printf("\ndata in list are: ");
    	while(temp!=NULL){
        	printf("%d ",temp->data);
        	temp=temp->next;
    	}	
    }
		
		

void sort(){
	int x;
	struct node *temp1,*temp2;
	temp1=head;
	while(temp1!=NULL){
		temp2=temp1->next;
		while(temp2!=NULL){
			if(temp1->data>temp2->data){
				x=temp1->data;
				temp1->data=temp2->data;
				temp2->data=x;
			}
			temp2=temp2->next;
		}
		temp1=temp1->next;
	}
}
		
		
		
		
		
		
		
		
		
