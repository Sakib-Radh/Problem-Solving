#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int i, l;

    string z = "";

    l = s.length();

    for(i = l-1 ; i >= 0; i--)
    {
        z = z + s[i];
    }

    cout<<z;






}
