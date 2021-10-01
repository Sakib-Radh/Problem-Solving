#include<bits/stdc++.h>

struct node{

    int data;
    node *link;
};

using namespace std;

int main()
{
    node *head = NULL;
    head = (node *)malloc(sizeof(node));

    head->data = 100;

head->link = NULL;

cout<<head->data;


}
