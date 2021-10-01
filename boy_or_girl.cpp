#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, g;
    cin>>s;
    int i,j,c=0,k;

int l=s.length();
    k=l;
    for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(s[i] == s[j])

               s.erase(s.begin()+j);
               //cout<<s<<endl;





        }
    }
    l = s.length();
    cout<<s<<endl;
    cout<<l<<endl;

    if(l%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
        cout<<"IGNORE HIM!";
}
