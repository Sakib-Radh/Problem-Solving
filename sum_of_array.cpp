#include<bits/stdc++.h>

using namespace std;

int main()
{

        int digits[10] = {3,2};
        int n = 2;

        int x = pow(10, (n-1));

        int i;
        int sum = 0;
        for(i =0; i<n; i++)
        {
            sum = sum + (digits[i] * x);
            x=x/10;
        }
        sum = sum+1;

        cout<<sum<<endl;

         x = pow(10, (n-1));

        for(i=0; i<n; i++)
        {
            digits[i] = sum/x;
            x = x/10;

        }

        for(i=0; i<2; i++)
        {
            cout<< "  Case:" <<digits[i]<<endl;

        }


}
