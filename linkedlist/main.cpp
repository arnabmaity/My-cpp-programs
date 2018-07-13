#include <bits/stdc++.h>

using namespace std;
struct node
{
    int data;
    node *next;
};
void insert_at_first(node *&head,int value)
{
    node *newnode = new node;
    newnode->data = value;
    newnode->next = NULL;
    if(head==NULL)
    {
        head = newnode;
    }
    else
    {
        node *temp = head;
        while(temp->next)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void show_list(node *&head)
{
    node *temp = head;
    while(temp->next)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}
void delete_at_first(node *&head)
{
    node *temp = head;
    if(!temp)
    {
        cout<<"The list is empty.Please insert first\n";
        return;
    }
    else
    {
        head = head->next;
        free(temp);
    }
}

int main()
{
    node *head=NULL;
    cout<<"Press 1 to insert at end"<<endl<<"Press 2 to delete an item at first position"<<endl<<"Press 3 to show the list\n";
    cout<<"Press 4 to exit\n";
    int choice;
    cin>>choice;
    while(choice!=4)
    {
        if(choice==1)
        {
            int value;
            cout<<"Enter value : ";
            cin>>value;
            insert_at_first(head,value);

        }
        if(choice==2)
        {
            delete_at_first(head);

        }
        if(choice==3)
        {
            show_list(head);
        }
        cout<<"Press 1 to insert at end"<<endl<<"Press 2 to delete an item at first position"<<endl<<"Press 3 to show the list\n";
        cout<<"Press 4 to exit\n";
        cin>>choice;
    }
    return 0;
}
