#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[10000];
    int m = 99999, temp = 0, c = 0, i;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        if(a[i] <= a[i+1])
        {

            c++;
            //break;

        }

    }
    cout<<c<<endl;

}
