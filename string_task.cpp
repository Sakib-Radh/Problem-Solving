#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s, a;
    cin>>s;
    //a[0] = s[0];

    int l, i, j;

    l = s.length();

    for(i=0; i<l; i++)
    {
        if(s[i] >= 65 and s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
    }


    //cout<<a[i]<<endl;

for(i=0; i<l; i++)
    {

        if(s[i] != 'a' and s[i] != 'e' and s[i] != 'i' and s[i] != 'o' and s[i] != 'u')
        {
            cout<<"."<<s[i];
        }

    }

    //cout<<a<<endl;
}
