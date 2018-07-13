/*Author : Mr.Arnab Maity
This is a iterative way of reversing a linked list*/
#include <stdio.h>
#include <stdlib.h>
#define NULL ((void *)0)
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
void create_and_add(node **head)
{
    int value;
    scanf("%d",&value);
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = value;
    newnode->next = NULL;
    if((*head)==NULL)
    {
        *head = newnode;
    }
    else
    {
        struct Node *temp;
        temp = (*head);
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
/*Reverse list function starts here*/
void reverselist(node **head)
{
    node *p,*q,*r,*temp;
    temp = *head;
    p = *head;
    q = *head;
    r = NULL;
    if(temp)
    {
        if(temp->next==NULL)
        {
            return;
        }
        else
        {
            while(q)
            {
                q = p->next;
                p->next = r;
                r = p;
                p = q;
            }
            (*head) = r;
        }
    }

}
void printlist(struct Node **head)
{
    struct Node *temp;
    temp = (*head);
    while((temp->next))
    {
        printf("%d-->",temp->data);
        temp = temp->next;
    }
    printf("%d\n",temp->data);
}
int main()
{
    node *head;
    head = NULL;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       create_and_add(&head);
    }
    printf("Printing the list as given \n");
    printlist(&head);
    reverselist(&head);
    printf("Printing the list after reversing the given list \n");
    printlist(&head);
    return 0;
}
