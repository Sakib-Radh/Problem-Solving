#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};


int main()
{
    node *one = NULL;
    node *two = NULL;
    node *three = NULL;
    node *head = NULL;

    one = (node*)malloc(sizeof(node));
    two = (node*)malloc(sizeof(node));
    three = (node*)malloc(sizeof(node));

    one->data = 1;
    one->next = two;

    two->data = 2;
    two->next = three;

    three->data = 3;
    three->next = NULL;

    head = one;
/*
    node *newnode = NULL;
    newnode = (node*)malloc(sizeof(node));
    newnode->data = 4;
    newnode->next = head;
    head = newnode;

    */
    node *nodeatlast;
    nodeatlast = (node*)malloc(sizeof(node));

    nodeatlast->data = 5;
    nodeatlast->next = NULL;

    node *temp = NULL;

    temp = head;

    while(temp!=NULL)
    {
        temp = temp->next;
    }

    temp->next = nodeatlast;

    while(head != NULL)
    {
      cout<<head->data<<endl;
      head = head->next;
    }




}
