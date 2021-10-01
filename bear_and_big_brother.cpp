
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;

    int i, c=0;

for(i=1;i<100;i++)
{
    a = 3*a;
    b = 2*b;
    c++;

    if(a>b)
    {
        break;
    }
}
    cout<<c;
}
