
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,k, a[1000], flag = 0,i,b;
    cin>>n;
    cin>>k;

    for(i=1; i<=n; i++)
    {
        cin>>a[i];

    }

  for(i=1; i<=n; i++)
    {
        b = a[k];
        if(a[i]>=b && a[i]>0)
        {
            flag++;
        }
    }
cout<<flag;


}
