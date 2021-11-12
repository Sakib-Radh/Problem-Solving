#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, t, n, a[1000];

    cin>>t;

    for(i=0; i<t; i++)
    {
        cin>>n;
         for(j=0; j<n; j++)
        {
            cin>>a[j];
            a[j] = abs(a[j]);

             if(j%2 == 0)
       {
           a[j] = a[j];
       }
       else
        a[j] = a[j] * (-1);

       cout<<a[j]<<" ";
        }

        cout<<endl;











    }

}
