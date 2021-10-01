#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    string s, t, temp;
    cin>>s>>t;
    int i, l, c=0;
    l = s.length();

    reverse(t.begin(), t.end());

    for(i=0; i<l; i++)
    {
        if(s[i] == t[i])
        {
            c=1;

        }
        else
        {
           c=0;
           break;
        }



    }

    if(c == 1)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

}
