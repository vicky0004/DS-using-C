#include <stdio.h>
#define N 6

//funtion declaration
void enqueue(int);
void dequeue();
void display();





// global variable
int queue[N];
int front=-1;
int rear=-1;


//main function -execution begin from here
int main(){
	int choice,x;
	printf("1-enqueue\n2-dequeue\n3-display\n");
	do{
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("\nEnter the number to add in queue: ");
				scanf("%d",&x);
				enqueue(x);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("invalid input \n");

		}
	}while(choice-4);
	return 0;
}


//enque function 

void enqueue(int x){
	if(rear==N-1){
		printf("Overflow- can't add\n");
	}
	else if(rear==-1 && front ==-1){
		front=rear=0;
		queue[rear]=x;
	}
	else{
		rear++;
		queue[rear]=x;
	}
}


//dequeue function
void dequeue(){
	if(rear==-1 && front==-1){
		printf("Under flow -queue is empty\n");
	}
	else if(rear==0 && front==0){
		rear=front= -1;
	}
	else{
		front++;
	}
}


//display function 
void display(){
	int temp=front;
	printf("queue elements are: ");
	for(int i=front;i<=rear;i++){
		printf("%d ",queue[i]);
	}
	printf("\n");


}

