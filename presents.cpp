#include<bits/stdc++.h>
using namespace std;
map<int, int>m;
int main()
{
    int n, i, p[100];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>p[i];
    }
    for(i=1; i<=n; i++)
    {
       m[p[i]] = i;
    }
    map<int, int> :: iterator it;

    for(it = m.begin(); it != m.end(); ++it)
    {
        cout<<(*it).second<<" ";
    }
}
