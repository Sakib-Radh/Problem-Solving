#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c = 0, i, l, a=0,j;

    l=s.length();
   for(i=0;i<l;i++)
   {
       if(s[i] == s[i+1])
       {
           c++;
           if(c>=6)
           {
               a=1;
               break;
           }

       }
       else{
        c=0;
       }

   }

    if(a==1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
//100001000000110101100000
//00100110111111101


