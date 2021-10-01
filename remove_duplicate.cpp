#include<iostream>
#include<vector>

using namespace std;



int main()
{

    int a[10], i, b[10];

    for(i=0; i<3; i++)
    {
        cin>>a[i];
    }

    for(i=2; i>=0; i--)
    {
        b[i] = a[i];
    }
    for(i=0; i<3; i++)
    {
        cout<<b[i];
    }


}
