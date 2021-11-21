#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, asum=0, bsum=0, csum=0, dsum=0, esum=0;

    cin>>a>>b>>c;


    asum = a+(b*c);
    bsum = a*(b+c);
    csum = a*b*c;
    dsum = (a+b)*c;
    esum = a+b+c;

    int max1, max2, max3;

    max1 = max(asum, bsum);
    max2 = max(csum, dsum);

    max3 = max(max1, max2);

    max3 = max(max3, esum);

    cout<<max3<<endl;
}
