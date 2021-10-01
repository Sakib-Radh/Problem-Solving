#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[1000],b[1000],c[1000],i;
    cin>>n;
    //int a[1000];
    int flag=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        if(a[i]+b[i]+c[i] == 2 || a[i]+b[i]+c[i]==3)
        {
           flag = flag+1;
        }
    }



        cout<<flag<<endl;


}
