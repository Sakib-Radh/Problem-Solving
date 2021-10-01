#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;



    int l;

    l = s.length();

    int i=0, j = l-1;

    while(i<=j)
    {
        char temp  = s[i];

        s[i] = s[j];

        s[j] = temp;

        i++; j--;
    }




    cout<<s<<endl;



}
