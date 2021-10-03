#include<bits/stdc++.h>

using namespace std;



int main()
{
        map<string, int>marksMap;

        marksMap["H"] = 90;
        marksMap["J"] = 80;

        map<string, int> :: iterator itr;

        marksMap.insert({"R",100});
        for(itr = marksMap.begin(); itr!=marksMap.end();itr++)
        {
            cout<<(*itr).first<<" "<<(*itr).second<<endl;
        }


}

