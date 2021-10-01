#include<bits/stdc++.h>
using namespace std;

struct node{

    int data;
    node *link;
};

void add_node_end(node *head, int data)
{
    node *ptr, *temp;

    ptr = head;

    temp = (node*)malloc(sizeof(node));

    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL)
    {
       ptr = ptr->link;
    }
    ptr->link = temp;
}

void print_node(node *head)
{
    if(head == NULL)
        cout<<"Empty"<<endl;

    node *ptr = NULL;
        ptr = head;

        while(ptr != NULL)
        {
            cout<<ptr->data<<endl;
            ptr = ptr->link;
        }
}

int main()
{
    node *head;

    head->data = 40;
    head->link = NULL;

    add_node_end(head, 67);
    print_node(head);
}
