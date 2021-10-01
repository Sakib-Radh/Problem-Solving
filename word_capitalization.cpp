#include<iostream>
#include<string>
using namespace std;

int main()
{

    string s;
    cin>>s;
    int i, l;

    l=s.length();

    for(i=0; i<l; i++)
    {
        if(s[0]>=97 && s[0]<=122)
        {
            s[0] = s[0]-32;
        }
    }
    cout<<s;





}
