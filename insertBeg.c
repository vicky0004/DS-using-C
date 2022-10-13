#include <stdio.h>
void insertBeg(void);
void print(void);
struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode, *temp;
int main()
{   
    int choice = 1;
    head = 0;
    newnode = (struct node *)malloc(sizeof(struct node));
    while (choice)
    {
        printf("enter data :");
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
        printf("do u want add new data(1,0)");
        scanf("%d", &choice);
    }
    printf("Your data is :");
    print();
    insertBeg();
    printf("modified data is : ");
    print();
}

void insertBeg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nenter data added to starting :");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
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