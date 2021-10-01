#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10][10], i, j, c=0;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(a[][1] == 1 || a[5][1] == 1 || a[1][5] ==1 || a[5][5] == 1)
            {
                cout<<"4";
            }
            else if(a[1][2] == 1 || a[1][4] == 1 || a[5][2] == 1 || a[5][4] == 1 || a[2][1] == 1 || a[4][1] == 1 || a[2][5] == 1 || a[4][5] == 1)
            {
                cout<<"3";
            }
             else if(a[1][3] == 1 || a[5][3] || a[3][1] || a[3][5] == 1)
            {
                cout<<"2";
            }
            else if(a[2][3] == 1 || a[3][2] == 1 || a[3][4] == 1 || a[4][3] == 1)
            {
                cout<<"1";
            }

            else
                cout<<"0";
        }
    }


}
