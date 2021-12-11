#include <iostream>
using namespace std;

int main() {
     string s1, s2, s3;

     cin>>s1>>s2;

     int i, l;

     l = s1.length();
     for(i=0; i<l; i++)
     {
        if(s1[i] == s2[i])
        s1[i] = '0';
        else
        s1[i] = '1';
     }

 cout<<s1;

}
