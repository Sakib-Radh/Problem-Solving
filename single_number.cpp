#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int a[10] = {1,2,1,2,3};
    int i, j, temp;

    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(a[i] == a[j])
            {
                break;

            }

            else
                temp = a[j];



        }

    }



    cout<<temp;




}
