#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    int p[100], q[100], sum = 0;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>p[i];
        cin>>q[i];
    }

    for(i=0; i<n; i++)
    {
         if(q[i] - p[i] > 1)
        {
            sum++;
        }

    }
        cout<<sum;
}
