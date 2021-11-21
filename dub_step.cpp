#include<bits/stdc++.h>
using namespace std;

int main()
{

   string s;
   int a=1, b=0, c=0, flag1 =0, flag2=0;
   //string c = "WUB";
   cin>>s;
   int i, l, j;
   l = s.length();

i = 0;

while(i<l)
{

    if(s[i] == 'W' and s[i+1] == 'U' and s[i+2] == 'B')
    {
        i = i+3;
        cout<<" ";
        //break;
    }

    else
    {
        //cout<<" ";
        cout<<s[i];
        i++;
    }




}


}
