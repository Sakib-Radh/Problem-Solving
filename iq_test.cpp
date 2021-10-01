#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, i, a[100], e=0, o=0, x;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a[i];

        if(a[i]%2==0)
        e++;

        else{
        o++;
        }
    }
    if(e==1)
    {
        for(i=1;i<=n;i++)
        {
            if(a[i]%2==0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    else{
        for(i=1;i<=n;i++)
        {
            if(a[i]%2!=0)
            {
                cout<<i<<endl;
                break;
            }
        }

    }
}








