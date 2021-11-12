#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int k, n;

    cin>>k>>n;

    long long int i;
    uint64_t a[10000];
    //cout<<k/2;
    //string a;
    if(k%2 == 0)
    {

      for(i=0; i<(k/2); i++)
    {
        a[i] = 2*i+1;
    }
    for(i=0; i<(k/2); i++)
    {
        a[i+(k/2)] = 2*i+2;
    }

    //for(i=0; i<k; i++)
    //{
        //cout<<"even"<<endl;
        //cout<<a[i]<<" ";
    //}



    }

    else
    {
        //cout<<k/2<<endl;

         for(i=0; i<(k/2)+1; i++)
    {
        a[i] = 2*i+1;
    }
    for(i=0; i<(k/2); i++)
    {
        a[i+(k/2)+1] = 2*i+2;
    }



    }
    cout<<a[n-1]<<endl;

}
