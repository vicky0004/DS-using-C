#include <stdio.h>
#define N 3

//function declaration 
void push(void);
void pop(void);
void peek(void);
void display(void);


int count;

struct node{
	int data;
	struct node *next;
};
struct node *top,*temp;
int main(){
	top =0;
	count=0;
	int choice;
	printf("\n1: push()\n2:pop()\n3:peek()\n4:display()\n5:exit..\n");
	do{
		printf("\nenter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				return 1;
			default:
				printf("invalid input...");
				break;
		}
		
	}while(choice!=5);
	
}


//push funtion- for insert an element in stack
void push(){
	struct node *newnode;
	if(count==N){
		printf("Overflow..");
	}
	else{
		newnode =(struct node *)malloc(sizeof(struct node));
		printf("enter the data: ");
		scanf("%d",&newnode->data);
		newnode->next=top;
		top=newnode;
		count++;
	}
}


//pop function - for delete an element from stack
void pop(){
	if(count== 0){
		printf("Underflow..");
	}
	else{
		temp=top;
		top=top->next;
		free(temp);
		count--;
	}
}


//peek or top function - for display top element of stack
void peek(){
	if(count == 0){
		printf("stack is empty..");
	}
	else{
		printf("%d",top->data);
	}
}


//display function- for display all the element of stack
void display(){
	temp=top;
	printf("stack element are :");
	while(temp!=0){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
