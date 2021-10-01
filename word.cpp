
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int l, a=0, b=0, i;

    l=s.length();
    for(i=0;i<l;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            a++;
        }
        else
            b++;
    }

  for(i=0;i<l;i++)
    {
         if(a>b && (s[i]>=92) && (s[i]<=122))
    {
        s[i]=s[i]-32;

    }

    else if(a<=b && (s[i]>=65) && (s[i]<=90)){
        s[i] = s[i]+32;
    }

    }



cout<<s;

}
