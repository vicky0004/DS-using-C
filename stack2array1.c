#include <stdio.h>
#define size 6
int stack1[size/2];
int stack2[size/2];
int top1=-1;
int top2=size;


void push1();
void pop1();
void push2();
void pop2();
void display();

//push1() - push an element into stack1
void push1()
{
	int x;
	if(top1==(size/2)-1){
			printf("overflow\n");
	}
	else{
		printf("enter the number to stack1: ");
		scanf("%d",&x);
		top1++;
		stack1[top1]=x;
	}
	
}

//push2() -push an element into stack2
void push2(){
	int x;
	if(top2==size/2){
		printf("overflow\n");
	}
	else{
		printf("Enter the number to stack2: ");
		scanf("%d",&x);
		top2--;
		stack2[top2]=x;
	}
}

//pop1()-poping an element from stack 1
void pop1(){
	if(top1==-1){
		printf("stack1 is empty\n");
	}
	else{
		top1--;
	}
}

//pop2()-poping an element from stack 2
void pop2(){
	if(top2==size){
		printf("stack2 is empty\n");
	}
	else{
		top2++;
	}
}

//display1()- display the stack1
void display1(){
	int i;
	if(top1==-1){
		printf("Stack1 is empty\n");
	}
	else{
		for(i=top1;i>=0;i--){
			printf("%d ",stack1[i]);
		}
		printf("\n");
	}
	
}

//display2()- display the stack2
void display2(){
	int i;
	if(top2==size){
		printf("stack2 is empty.\n");
	}
	else{
		for(i=top2;i<size;i++){
			printf("%d ",stack2[i]);
		}
		printf("\n");
	}
	
	
}



int main(){
	int x,choice;
	
	printf("1-push1\n2-push2\n3-pop1\n4-pop2\n5-display1\n6-display2\n7-close\n");
	do{	
		printf("Enter the choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push1();
				break;
			case 2:
				push2();
				break;
			case 3:
				pop1();
				break;
			case 4:
				pop2();
				break;
			case 5:
				display1();
				break;
			case 6:
				display2();
				break;
			case 7:
				choice=0;
				break;
			default:
				printf("invalid choice");
				choice=7;
		}
	}while(choice);
	
	return 1;	
}