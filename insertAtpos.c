#include <stdio.h>
void print(void);
void insertPos(void);

struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp, *newnode;

int main()
{
    int choice = 1, count = 0;
    head = 0;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        count++;
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
        printf("Do u want to enter new data(1,0)");
        scanf("%d", &choice);
    }
    printf("\nYour list is :");
    print();
    insertPos();
    printf("\nModified data: ");
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

void insertPos()
{
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    int pos, i = 1;
    printf("\nEnter position: ");
    scanf("%d", &pos);
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    printf("\nenter data: ");
    scanf("%d", &newnode->data);
    newnode->next = temp->next;
    temp->next = newnode;
}
