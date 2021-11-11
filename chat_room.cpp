#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l, flag, i;
    l= s.length();

    for(i=0; i<l; i++)
    {
        if(s[i] == 'h')
        {
            if(s[i+1] != 'h' and s[i+1] == 'e')
            {
                if(s[i+2] != 'e' and s[i+2] == 'l')
                {
                    if(s[i+3] == 'l' and s[i+5] != 'l')
                    {
                        if(s[i+6] != 'l' and s[i+6] == '0')
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
            }
        }

    }

    if(flag == 1)
       {
           cout<<"YES"<<endl;
       }

       else
        cout<<"NO"<<endl;
}
