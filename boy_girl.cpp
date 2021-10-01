
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    int i, j, l, c=0;

    cin>>s;

    l = s.length();

    for(i=0; i<l-1; i++)
    {
        for(j=i+1; j<l; j++)
        {
            if(s[i] == s[j])

            {
               s.erase(j);
               break;

            }
        }
    }

    //cout<<s<<endl;
    //cout<<c<<endl;






}
