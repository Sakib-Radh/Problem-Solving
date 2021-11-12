#include<bits/stdc++.h>
using namespace std;

int main(){


int y;

cin>>y;

int a, b, c, d, ans;

for(int i=y+1; i<=9999; i++)
{


a = i%10;

ans = i/10;

b = ans%10;

ans = ans/10;

c = ans%10;

ans = ans/10;

d= ans%10;

//cout<<a<<b<<c<<d;

if(a!=b and a!=c and a!=d and b!=c and b!=d and c!=d)
{
    cout<<d<<c<<b<<a;
    break;
}
}





}
