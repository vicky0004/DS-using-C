#include <stdio.h>
#define N 3

//function declaration 
void push(void);
void pop(void);
void peek(void);
void display(void);

//global variables
int stack[N];
int top;

int main(){
	top =-1;
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
	int x;
	if(top==N-1){
		printf("Overflow..");
	}
	else{
		printf("enter the data: ");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}


//pop function - for delete an element from stack
void pop(){
	if(top == -1){
		printf("Underflow..");
	}
	else{
		stack[top]=0;
		top--;
	}
}


//peek or top function - for display top element of stack
void peek(){
	if(top == -1){
		printf("stack is empty..");
	}
	else{
		printf("%d",stack[top]);
	}
}


//display function- for display all the element of stack
void display(){
	printf("Top = %d\n",top);
	int i;
	printf("stack element are :");
	for(i=0;i<=top;i++){
		printf("%d ",stack[i]);
	}
}
