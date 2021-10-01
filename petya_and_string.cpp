#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s1,s2;
    cin>>s1;
    cin>>s2;

    for(i=0;i<s1.length();i++)
    {
        if(s1[i]>=65 and s1[i]<=90)
        {
            s1[i] = s1[i]+32;
        }

        if(s2[i]>=65 and s2[i]<=90)
        {
            s2[i] = s2[i]+32;
        }
    }

    if(s1<s2)
        cout<<"-1";

    else if(s1>s2)
        cout<<"1";

    else
        cout<<"0";



}
