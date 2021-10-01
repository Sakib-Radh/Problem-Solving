#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, a[10], i, temp, s=0, m=0, x = 0;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int j;

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }


        }

    }

    for(i=0; i<n; i++)
    {
        //cout<<a[i]<<endl;
        s = s+a[i];
        if((s/2) >= (m+a[i]))
        {
            x++;
        }


    }



    cout<<x;


}
