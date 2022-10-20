//WAP of linked list to display ,add at beg ,add end

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head,*temp,*newnode;

void display(void);
void addnode(void);
void addbeg(void);
void addpos(void);

int main(){
    int choice;
    printf("\n1-add last\n2-display the list\n3-add at starting\n4-exit\n");
    do{
    	printf("choice: ");
    	scanf("%d",&choice);
    	switch(choice){
    		case 1:
    			addnode();
    			break;
    		case 2:
    			display();
    			break;
    		case 3:
    			addbeg();
    			break;
    		case 4:
    			//addpos();
    			break;
    		case 4:
    			choice=0;
    			break;
    		
    	}
      }while(choice);
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
		printf("node cant't insert \nsomething error\n");
	else{
        	printf("Enter data: ");
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
}
    
    
void addbeg(){
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


void addpos(int value){
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
		printf("\nnode cant't insert \nsomething error\n");
	else{
        	printf("Enter data: ");
        	scanf("%d",&newnode->data);
        	newnode->next=NULL;
        	if(head==NULL){
            		printf("list is empty");
        	}
        	else{
        		while(temp->data!=value){
        			temp=temp->next;
    			}
        	}
        }
   }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
