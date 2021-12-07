#include<bits/stdc++.h>
using namespace std;
int Binarysearch(int a[], int n, int x)
{
    while(low<=high)
    {

    int low = 0; high = n-1, result = -1;
    int mid = (low+high)/2;
    if(a[mid] == x)
        {
            return mid;
            high = mid - 1;
            low = mid + 1;
        }
    else if(x<a[mid])
        high = mid-1;
    else
        low = mid+1;

    }
    return result;
}

int main()
{

}
