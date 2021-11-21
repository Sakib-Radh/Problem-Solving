#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, a[1000], b[1000], temp, a1sum = 0;
    float a3 = 0, a2 = 0, a1 = 0;
    float div, sum1 = 0;
    cin>>n;

   int count1 = 0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i] == 4)
            {
                count1++;
            }
            else if(a[i] == 3)
            {

                a3++;
            }
             else if(a[i] == 1)
            {
                a1sum = a1sum+a[i];
                a1++;
            }




        }

        if(a1 <= a3)
        {
            count1 = count1+a3;
        }
        else if(a1>a3)
        {
            count1 =
        }








}

