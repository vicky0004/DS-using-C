//WAP of linked list to display ,delete,reverse ,and stack


#include <stdio.h>
#include <stdlib.h>
#define N 8

int top=-1;

struct node{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode;

void display(void);
void addnode(void);
void reverse(void);
void del(void);
void stack(void);


int main(){
    int choice;
    printf("\n1-add new node\n2-display the list\n3-delete a node\n4-reverse the list\n5-stack impliment\n6-exit\n");
    do{
    	printf("\nchoice: ");
    	scanf("%d",&choice);
    	switch(choice){
    		case 1:
    			addnode();
    			break;
    		case 2:
    			display();
    			break;
    		case 3:
    			del();
    			break;
    		case 4:
    			reverse();
    			break;
    		case 5:
    			stack();
    			break;
    		case 6:
    			break;
    		default:
    			printf("invalid input\n");
    	}
      }while(choice!=6);
}


void display(){
	temp=head;
	printf("\ndata in list are: ");
    	while(temp!=NULL){
        	printf("%d ",temp->data);
        	temp=temp->next;
    	}	
    }

    
void addnode(){
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
		printf("\nnode cant't insert \nsomething error\n");
	else{
        	printf("Enter data: ");
        	scanf("%d",&newnode->data);
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

void del(){
	if(head==NULL){
		printf("list is empty\n");
	}
	else{
		temp=head;
		head=head->next;
		temp->next =NULL;
		printf("%d is deleted\n",temp->data);
		free(temp);
	}
}


void reverse(){
	struct node *curr,*prev,*next;
	prev=NULL;
	curr=next=head;
	while(next!=NULL){
		next = curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	head=prev;
}

void stack(){
	int choice;
	printf("1-push\n2-pop\n3-display\n4-exit\n");
	head=NULL;
	do{
    	printf("stack imp. choice: ");
    	scanf("%d",&choice);
    	switch(choice){
    		case 1:
    			if(top==N-1){
    				printf("stack is full\n");
    			}
    			else{
    				top++;
    				addnode();
    			}
    			break;
    		case 2:
    			if(top==-1){
    				printf("Stack is empty\n");
    			}
    			else{
    				top--;
    				del();
    			}
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
      printf("stack implementation over\n");
}
    
    
    
    
    
    
    
    
    
    
    
    
    
