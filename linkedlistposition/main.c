/*This is a linked list function where we can insert at any position,delete at any position,create a list,replace/modify a node value*/
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
void printlist(struct Node **head)
{
    struct Node *temp;
    temp = (*head);
    while((temp->next))
    {
        printf("%d-->",temp->data);
        temp = temp->next;
    }
    printf("%d",temp->data);
}
void Enter_at_position(struct Node **head,int pos)
{
    printf("\nEntered function\n");
    struct Node *temp;
    int count=0;
    temp = (*head);
    while(temp)
    {
        count++;
        temp = temp->next;
    }
    if(pos>(count+1)||pos<1)
    {
        printf("\nNot Possible\n");
    }
    else
    {
        if(pos==1)
        {
            temp = (*head);
            printf("\ncreating new node\n");
            int n;
            scanf("%d",&n);
            struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
            newnode->data = n;
            newnode->next = NULL;
            newnode->next = temp;
            (*head) = newnode;

        }
        else
        {
            temp = (*head);
            for(int i=1;i<=(pos-2);i++)
            {
                temp = temp->next;
            }
            printf("\ncreating new node\n");
            int n;
            scanf("%d",&n);
            struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
            newnode->data = n;
            newnode->next = temp->next;
            temp->next = newnode;
        }

    }
}
void Delete_at_position(struct Node **head,int pos)
{
    struct Node *p,*q,*temp;
    temp = (*head);
    if(pos==1)
    {
        q = (*head);
        (*head) = (*head)->next;
        q->next = NULL;
        free(q);

    }
    else
    {
        for(int i=1;i<=(pos-2);i++)
        {
            temp = temp->next;
        }
        p = temp->next;
        temp->next = p->next;
        p->next = NULL;
        free(p);
    }
}
int main()
{
    int n,position;
    scanf("%d",&n);
    struct Node *head;
    head = NULL;
    for(int i=0;i<n;i++)
    {
       create_and_add(&head);
    }
    printlist(&head);
   printf("\n");
   scanf("%d",&position);
   printf("position = %d\n",position);
    Enter_at_position(&head,position);
    printlist(&head);
   printf("\n");
    scanf("%d",&position);
   printf("position = %d\n",position);
    Enter_at_position(&head,position);
    printlist(&head);
    printf("\n");
    scanf("%d",&position);
   printf("position = %d\n",position);
   Delete_at_position(&head,position);
   printlist(&head);
    return 0;
}
