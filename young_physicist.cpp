#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[100][100], y[10], z[10];
    int i, j;

     for(i=0; i<n; i++)
     {
         for(j=0; j<3; j++)
         {
             cin>>x[i][j];
         }

     }

    int sum1 = 0, sum2 = 0, sum3 = 0;

    j = 0;

    for(i=0; i<n ; i++)
    {
        sum1 = sum1 + x[i][j];
    }

    j = 1;

    for(i=0; i<n ; i++)
    {
        sum2 = sum2 + x[i][j];
    }
    j = 2;

    for(i=0; i<n ; i++)
    {
        sum3 = sum3 + x[i][j];
    }

    if(sum1 == 0 and sum2 == 0 and sum3 == 0)
    {

        cout<<"YES";
    }
    else
        cout<<"NO";


}
