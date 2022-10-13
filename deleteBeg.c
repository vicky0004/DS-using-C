#include <stdio.h>
void print(void);
void deleteBeg(void);

struct node
{
    int data;
    struct node *next;
};
struct node *newnode, *temp, *head;
int main()
{
    head = 0;
    int choice = 1;
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
        printf("do u want add new data(0,1): ");
        scanf("%d", &choice);
    }
    printf("\nyour list is:");
    print();
    printf("\nafter delete first data list is: ");
    deleteBeg();
    print();
}

void print()
{
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void deleteBeg(){
    head=head->next;
}
