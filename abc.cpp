#include<bits/stdc++.h>

using namespace std;



int main()
{
    int one = 10, two = 20, *p, sum = 0;

    p = &one;
    cout<<*p<<endl;
    one++;
    (*p)++;
    cout<<*p<<endl;
    sum = one+two+*p;

    cout<<sum<<endl;

    return 0;
}
