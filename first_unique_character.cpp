#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "amarnam";
    map<char, int>m;
    int i;
      int n ;

    for(i=0; i<s.length(); i++)
    {
         m[s[i]]++;
    }
    map<char, int> :: iterator it;

    for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    for(i=0; i<s.length(); i++)
    {
         if(m[s[i]] == 1)
         {

             n = i;
             break;
         }
    }
    cout<<n<<endl;

}
