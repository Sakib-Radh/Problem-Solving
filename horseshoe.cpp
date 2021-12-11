#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4, i, a[100000];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
   set<int>s;
    int c = 0;
    for(i=0; i<n; i++)
    {
        s.insert(a[i]);
        c++;
    }

    set<int>::iterator itr;



     for(itr = s.begin(); itr != s.end(); ++itr)
    {
        //cout<<*itr<<endl;
        //all++;
    }
        cout<<4-*itr;

}
