#include<bits/stdc++.h>
using namespace std;

class cube
{
    public:
    static int obc;
    cube()
    {
        obc++;
    }
    cube obc = 0;
};

int main()
{

    cout<<cube::obc<<endl;
    cout<<cube::obc<<endl;


}
