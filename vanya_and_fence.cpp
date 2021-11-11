#include<bits/stdc++.h>
using namespace std;

int main()
{

int n, h, coun = 0;
cin>>n>>h;

int i, a[10000];

for(i=0; i<n; i++)
{
    cin>>a[i];
    if(a[i] > h)
        coun = coun + 2;
    else
        coun = coun + 1;

}

cout<<coun<<endl;






}
