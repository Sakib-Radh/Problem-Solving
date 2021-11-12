#include<bits/stdc++.h>
using namespace std;

int main()
{
    //map<char, int>m;
    int n;
    char s[100000];
    int i;
    cin>>n;
    int a=0, d=0;


    for(i=0; i<n; i++)
    {
        cin>>s[i];

    }

    for(i=0; i<n; i++)
    {
        if(s[i] == 'A')
        {
            a++;
        }
        else
            d++;
    }

    if(a>d)

        cout<<"Anton";

    else if(d>a)
        cout<<"Danik";
    else
        cout<<"Friendship";

}
