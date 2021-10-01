#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i, a=0,b=0, sum=0;
    string x;
    cin>>n;

    for(i=0;i<n;i++)
    {
    cin>>x;
    if((x[0]=='+' and x[1]=='+') || (x[1]=='+' and x[2]=='+'))
    {
        a++;
    }
    else{
        a--;
    }
    }


      cout<<a;

}






