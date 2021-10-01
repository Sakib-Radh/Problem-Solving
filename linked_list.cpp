#include<bits/stdc++.h>
using namespace std;

struct node{

    int data;
    node *link;


};



int main()
{
    node *head = NULL;
    head = (node*)malloc(sizeof(node));

    head ->data = 45;
    head-> link = NULL;

    cout<<head->data;
    return 0;

}
