#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100] = {1, 6, 6, 7, 2, 2};


    map<int, int> m;
    int i;
      int n ;

       for(i=0; i<6; i++)
    {
         m[a[i]]++;
    }
     map<int, int> :: iterator it;

    for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

}
