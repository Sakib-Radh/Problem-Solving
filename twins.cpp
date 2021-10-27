#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, a[10], i, sum = 0, count1  = 0;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum = sum+a[i];
    }

    //cout<<sum<<endl;
    sort(a, a+n);
    i = 0;
    //sort(a[].begin(), a[].end());
    while((a[i]+a[i+1]) < (sum/2))
    {
        count1++;
        i++;

    }

    cout<<count1<<endl;


}
