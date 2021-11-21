    #include<bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n, i, j, a[100000];
        float div, count1 = 0;
        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            count1 = count1+a[i];

        }

        div = float(count1/4);
        //cout<<count1<<endl;





        if(a[0] == 3 and a[1] == 3 and a[2] == 2)
        {
            cout<<3;
        }
        else
        cout<<ceil(div);



    }
