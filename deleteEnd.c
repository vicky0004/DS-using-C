#include <stdio.h>
void print(void);
void deleteEnd(void);
struct node
{
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp,*prevnode;
int main()
{
    int choice = 1;
    head = 0;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("do u want to add data(0,1): ");
        scanf("%d", &choice);
    }

    printf("your list is : ");
    print();
    deleteEnd();
    printf("\nAfter delete last data list is: ");
    print();
    return 0;
}

void print()
{
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    free(temp);
}
void deleteEnd()
{
    temp=head;
    while (temp->next != 0)
    {
        prevnode=temp;
        temp=temp->next;
    }
    if(temp==head){
        head=0;
        free(temp);
    }
    else{
    prevnode->next=0;
    }
    free(temp);
}