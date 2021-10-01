#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
    vector<int>a;
    //vector<int>*a;

    int i;

    for(i=0; i<5; i++)
    {
        a.push_back(i);

    }

    for(i = 0; i<a.size(); i++)
    {
        cout<<a[i]<<endl;
            cout<<a.size();
    }
}
