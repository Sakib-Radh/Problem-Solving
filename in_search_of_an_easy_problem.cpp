#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100];
    int i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int flag = 0;
     for(i=0; i<n; i++)
    {
        if(a[i] == 1)
        {
            flag = 1;
        }
    }

    if(flag == 1)
    {
        cout<<"HARD";
    }
    else
        cout<<"EASY";


}
