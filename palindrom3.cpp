#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = "a man A A";
    string t = "";

        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == ' ')
                continue;

            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
                t += tolower(s[i]);
        }
        cout<<t<<endl;

        int i = 0, j = t.size() - 1, f = 0;
        while(i < j)
        {
            if(t[i] == t[j])
            {
                ++i;
                --j;
                f= 1;
            }
            else
            {
            f= 0;
            break;
            }
        }

            if(f == 1)
        cout<<"TRUE";

        else
             cout<<"FALSE";

}
