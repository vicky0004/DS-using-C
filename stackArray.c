#include <stdio.h>
#define size 5

int stack[size];
int top = -1;


void push(void);
void pop(void);
void display(void);


int main(){
	int choice;
	printf("1-push element\n2-pop element\n3-display stack\n4-exit program");
    do{
	printf("choose option ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			return 1;
		default:
			printf("invalid input\n");
			break;
		}
    	}while(1);

   return 0;
}

void push(){
	int x;
	printf("\nEnter the value u want to store in stack: ");
	scanf("%d",&x);
	if(top==-1){
		top=0;
		stack[top]=x;
	}
	else if(top==size-1){
		printf("Overflow- can't store\n");
	}
	else{
		top=top+1;
		stack[top]=x;
	}
}




void pop(){
	if(top==-1){
		printf("Underflow- stack is empty\n");
	}
	else{
		top=top-1;
	}
}


void display(){
	int temp=top;
	printf("stack elements: ");
	while(temp>=0){
	if(temp==-1){
		printf("stack is empty\n");
	}
	else{
		printf("%d ",stack[temp]);
		temp--;
	   }
	}
	printf("\n");
}









