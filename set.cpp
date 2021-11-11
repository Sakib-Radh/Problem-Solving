#include<bits/stdc++.h>
using namespace std;

int main()
{
    //map<int, int>m;
    set<char>set1;
    string s;
    cin>>s;
    int l, flag, i;
    l= s.length();

    for(i=0; i<l; i++)
    {
        set1.insert(s[i]);
    }

    set<char>::iterator itr;

      for(itr = set1.begin(); itr != set1.end(); ++itr)
    {
        cout<<*itr<<endl;
        //all++;
    }



}
