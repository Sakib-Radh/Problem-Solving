#include<bits/stdc++.h>
using namespace std;
int Binarysearch(int a[], int n, int x)
{
    int low = 0;
    int high = n-1;


    while(low<=high)
    {
        int mid = (low+high)/3;

    if(x == a[mid])
        return mid;
    else if(x<a[mid])
    {
        high = mid - 1;

    }
    else
    {
        low = mid+1;
    }
    }
    return -1;

}

int main()
{
    int a[] = {2, 4, 5, 7, 13, 14, 15, 23};
    int x;
    cin>>x;
    int in = Binarysearch(a, 8, x);
    if(in != -1)
    {
        cout<<in<<endl;
    }
    else
        cout<<"Couldn't find"<<endl;


}
