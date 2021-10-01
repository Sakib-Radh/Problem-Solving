#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    char temp;
    cin>>s;
    int i, j, l;
    l=s.length();

    for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(s[j]<s[i]&& s[i]!='+' && s[j]!='+')
            {
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }

cout<<s;




}
