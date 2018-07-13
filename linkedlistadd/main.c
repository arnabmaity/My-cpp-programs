#include <stdio.h>
#include <stdlib.h>
#define NULL ((void*)0)
struct Node
{
    int data;
    struct Node *next;
};
void create_and_add(struct Node **head)
{
    int n;
    scanf("%d",&n);
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = n;
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
void listadd(struct Node **head)
{
    int sum=0;
    struct Node *temp;
    temp = (*head);
    while(temp!=NULL)
    {
        sum += temp->data;
        temp=temp->next;
    }
    printf("sum = %d",sum);
}
void printlist(struct Node **head)
{
    struct Node *temp;
    temp = (*head);
    while((temp->next)!=NULL)
    {
        printf("%d-->",temp->data);
        temp = temp->next;
    }
    printf("%d\n",temp->data);
}
int main()
{
    int n;
    scanf("%d",&n);
    struct Node *head;
    head = NULL;
    for(int i=0;i<n;i++)
    {
       create_and_add(&head);
    }
    printlist(&head);
    listadd(&head);


    return 0;
}
