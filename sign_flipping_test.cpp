#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, a[100];

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        if(a[i] >= 0)
        {
            a[i] = a[i];
        }
        else
        {
            a[i] = (-1) * a[i];
        }

        if(a[i+1] <= 0)
        {
            a[i+1] = a[i+1];
        }
        else
        {
            a[i+1] = a[i+1] * (-1);
        }
    }

    for(i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}
