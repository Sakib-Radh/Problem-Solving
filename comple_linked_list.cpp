#include<bits/stdc++.h>
using namespace std;

struct node{

    int data;
    node *link;
};

void count_of_node(node *head)
{
    int sum = 0;
    if(head == NULL)
    {
        cout<<"Linked list is empty"<<endl;

    }


        node *ptr = NULL;

        ptr = head;

        while(ptr != NULL)
        {
            sum++;
            ptr->link;
    }
    cout<<sum<<endl;


}

void print_data(node *head)
{
    if(head == NULL)
        cout<<"Linked list is empty"<<endl;

    node *ptr = NULL;
    ptr = head;

    while(ptr != NULL)
    {
        cout<<ptr->data;

        //ptr = ptr->link;
    }
}

using namespace std;

int main()
{
    node *head = NULL;
    head = (node *)malloc(sizeof(node));

    head->data = 100;
    head->link = NULL;

    node *current = NULL;
    current = (node *)malloc(sizeof(node));

    current->data = 98;
    current->link = NULL;

    head->link = current;

    current = (node*)malloc(sizeof(node));
    current->data = 3;
    current->link=NULL;

    head->link->link=current;

    count_of_node(head);
    print_data(head);

    //cout<<head->data<<endl;
    //cout<<current->data;




}

