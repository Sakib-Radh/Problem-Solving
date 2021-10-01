#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "A man A A";
    string z = "", temp = "";

    int i, l;

    l = s.length();

    //cout<<l<<endl;

    for(i=0; i<l ; i++)
    {
        if(s[i]>=65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
    }
    cout<<l<<endl;
    cout<<s.size()<<endl;

    for(i=0; i<l; i++)
    {
        if(s[i] == ' ')
        continue;


        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            //temp = s[i];
            //z[i] = temp;
            z = z + s[i];
        }
    }

    temp = z;

    int x = z.length();

    //cout<<z<<endl;
    //cout<<temp<<endl;

    int f = 0;
    for(i = 0 ; i<x ; i++)
    {

        if(z[i] == temp[x-1-i])
        {
            f = 1;
        }
        else
        {
            f=0;
            break;
        }

    }

    if(f == 1)
    {
        cout<<"TRUE";
    }
    else
        cout<<"FALSE";


}
