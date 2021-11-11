#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){

    map<char, int>m;
    string s, a;
    //char temp;
    int all = 0;

    int i, j, l;

    cin>>s;

    //a[0] = s[0];

    l = s.length();

    for(i=0; i<l; i++)
    {
        m[s[i]]++;
    }

    map<char, int>::iterator itr;

    for(itr = m.begin(); itr != m.end(); ++itr)
    {
        //cout<<itr->first<<endl;
        all++;
    }

    //cout<<all<<endl;

    if(all%2 == 0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }

    else
        cout<<"IGNORE HIM!"<<endl;

    //cout<<a<<endl;




    //cout<<s<<endl;
    //cout<<c<<endl;






}
