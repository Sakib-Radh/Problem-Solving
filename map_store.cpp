#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100] = {1, 6, 6, 7, 2, 2};
    int b[100] = {2, 4, 8, 9};


    map<int, int> m;
    int i;
      int n ;

       for(i=0; i<6; i++)
    {
         m[a[i]]++;
    }
       for(i=0; i<4; i++)
    {
         m[b[i]];
    }
     map<int, int> :: iterator it;

    for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

}
