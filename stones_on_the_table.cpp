#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, c=0, l;
    cin>>n;
    string s;
   cin>>s;

    int a=s.length();
    for(i=0;i<a-1;i++)
    {
        if(s[i] == s[i+1])
        {
            c++;
        }
    }

    cout<<c;


}
