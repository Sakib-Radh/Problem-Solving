#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a[10], i, j, n=3;
     int c, b;

    for(i=0; i<3; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]+a[j] == 9)
            {

                c=i;
                b=j;
                break;
            }
        }
    }

    cout<<c<<" "<<b<<endl;
}
