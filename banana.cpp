#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int k, n ,w, i;

    cin>>k>>n>>w;

    int a = (w*(w+1))/2;

    int b = a*k;

    if(b>n)
    cout<<(b-n);
    else
        cout<<0;

}
