#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i, l;
    cin>>s;
    l=s.length();

    else if(s[0] >= 97 and s[0] <= 122)
    s[0] = s[0] - 32;

    for(i=1; i<l; i++)
    {
        if(s[i] >= 65 and s[i] <= 90)
        s[i] = s[i] + 32;
        else
        s[i] = s[i];
    }


        for(i=0; i<l; i++)
        {
            cout<<s[i];
        }
}

